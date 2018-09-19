from xml.etree.ElementTree import *
import xml.etree.ElementTree as ET
from xml.dom.minidom import parse, parseString
import xml.dom.minidom as minidom
import time
import math
import sys
import argparse
import pickle
import codecs
tree=ET.parse('output.xml')
root=tree.getroot()
n_root=ET.Element('XcodeProgram')

IO=["getchar","gets","fgets","scanf","fputc","putc","putchar","fputs","puts","fprintf","printf"]
TAG=["body","exprStatement","functionCall","function","funcAddr"]
TAG1=["breakStatement","returnStatement","gotoStatement","statementLabel"]
DAINYU=["asgPlusExpr","asgMinusExpr","asgDivExpr","asgModExpr","asgLshiftExpr","asgRshiftExpr","asgBitAndExpr","asgBitOrExpr","asgBitXorExpr","assignExpr"]
kaisou=0
line1=[]
line2=[]
for e in root.getiterator():
    a=e.items()
    for b in a:
        if(b[0]=='file'):
            f=0
            for c in line1:
                if(len(b[1])-2!=b[1].rfind('.c')):
                    f=1
                    break
                elif(len(b[1])-2==b[1].rfind('.c') and c!=b[1]):
                    f=2
                    break
            if(f==0):
                line1.append(b[1])
                line2.append(0)





def itmm(ele,i_root,ff):
    global line1
    global line2
    a=ele.items()
    asd=0
    sw=0
    for b in a:
        if(b[0]=='file'):
            for sw,c in enumerate(line1):
                if(c==b[1]):
                    break
    for b in a:
        if(b[0]=='lineno'):
            asd=int(b[1])
            i_root.set(b[0],str(line2[sw]+asd))
        elif(b[0]=='praflag' and ff==2):
            b=b
        else:
            i_root.set(b[0],b[1])
            
def ipsea(ele,ll,kai):
    mikke=0
    for e in ele.getiterator():
        # print("inp",e.tag)
        if(e.tag=="arrayAddr"):
            if((e.text in ll)==False):
                ll.append(e.text)
        if(e.tag=="pragma"):
            mikke+=1
            if(kai==mikke):
                break
    return ll

def selsea(ele,ll):
    for e in list(ele):
        if(e.tag=="arrayAddr"):
            if((e.text in ll)==False):
                ll.append(e.text)
        selsea(e,ll)
    return ll

kaikai=0

def oupsea(ele,ll,kai):
    global kaikai
    maa=ele.tag
    for e in list(ele):
        if(e.tag=="forStatement" and maa=="pragma" and kai>kaikai):
#            print(kai,kaikai)
            kaikai+=1
            continue
        if(e.tag=="arrayAddr"):
            if((e.text in ll)==False and kai<=kaikai):
                ll.append(e.text)
        oupsea(e,ll,kai)
        maa=e.tag
    return ll

kaichu=0

def chukan(ele,ll,kai):
    global kaichu
    maa=ele.tag
    for e in list(ele):
#        print(kai,kaichu)
        if(e.tag=="forStatement" and maa=="pragma"):
            print(kai,kaichu)
            kaichu+=1
            continue
        if(e.tag=="arrayAddr"):
            if((e.text in ll)==False and kai==kaichu):
                ll.append(e.text)
        chukan(e,ll,kai)
        maa=e.tag
    return ll

kai=0

def clook(ele,child_root,ckaisou):
    maa=ele
    global kai
    global kaikai
    global kaichu
    #hantei(ele,child_root,ckaisou)
    child_root=ET.SubElement(child_root,ele.tag)
    if(ele.items()):
        itmm(ele,child_root,1)
    child_root.text=ele.text
    naka=[]
    for e in list(ele):
        inp=[]
        selfp=[]
        oup=[]
        chup=[]
        if(e.tag=="forStatement" and maa.tag=="pragma"):
            print("")
            kai+=1
            inp=ipsea(root,inp,kai)
            selfp=selsea(e,selfp)
            kaikai=0
            oup=oupsea(root,oup,kai)
            kaichu=0
            naka.append(chukan(root,chup,kai))
            print(inp)
            print(selfp)
            print(oup)
            print(naka)
        maa=e
        clook(e,child_root,ckaisou+1)        

for ele in list(root):
    clook(ele,n_root,kaisou+1)

string = ET.tostring(n_root, 'utf-8')
pretty_string = minidom.parseString(string).toprettyxml(indent='  ')
with open('output_ce_data.xml','w')as f:
    f.write(pretty_string)
