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


                
#######################shokika##################################


def ipsea(ele,ll,kai):
    mikke=0
    for e in ele.getiterator():
        print("inp",e.tag)
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
#            print(kai,kaichu)
            kaichu+=1
            continue
        if(e.tag=="arrayAddr"):
            if((e.text in ll)==False and kai==kaichu):
                ll.append(e.text)
        chukan(e,ll,kai)
        maa=e.tag
    return ll

kai=0

kanrid=[]
kosuu=0

def clook(ele,child_root,ckaisou):
    maa=ele
    global kosuu
    global kai
    global kaikai
    global kaichu
    global kanrid    
    #hantei(ele,child_root,ckaisou)
    #child_root=ET.SubElement(child_root,ele.tag)
    #if(ele.items()):
    #    itmm(ele,child_root,1)
    #child_root.text=ele.text
    nn=0
    for e in list(ele):
        naka=[]
        inp=[]
        selfp=[]
        oup=[]
        chup=[]
        kanri=[]
        if(nn+1<len(ele)):
            if(ele[nn+1].tag=="forStatement" and ele[nn].tag=="pragma"):
                print("")
                kai+=1
                inp=ipsea(root,inp,kai)
                selfp=selsea(ele[nn+1],selfp)
                kaikai=0
                oup=oupsea(root,oup,kai)
                kaichu=0
                naka=chukan(root,naka,kai)
                kanri.append(inp)
                kanri.append(selfp)
                kanri.append(oup)
                kanri.append(naka)
                kanrid.append(kanri)
                print(inp)
                print(selfp)
                print(oup)
                print(naka)
                maa=e
                kosuu+=1
        clook(e,child_root,ckaisou+1)
        nn+=1

for ele in list(root):
    clook(ele,n_root,kaisou+1)

print(kanrid,kosuu)
print(kanrid[1][0])

used=[]
for i in range(kosuu):
    used+=list(set(kanrid[i][1])-set(used))
    
print("used",used)
basho=[]
def miru(ele,used):
    global basho
    mae=ele.tag
    for i in used:
        basho.append(0)
    for e in ele.getiterator():
        #print(e.tag)
        if(e.tag=="name" and mae=="id"):
            if(True==(str(e.text) in used)):
                for i in range(len(used)):
                    if(used[i]==e.text):
                        basho[i]=1
        mae=e.tag
    print(basho)
        #if(e.tag=="pragma")
    return basho

sengen_aru=[]
def clook_teigi(ele,child_root,ckaisou):
    global kai
    global kosuu
    global used
    global sengen_aru
    maa=ele
    nn=0
    sengen_aru=[]
    for e in list(ele):
        #grobale wo miru
        if(e.tag=="name" and e.text=="main" and ele.tag=="functionDefinition"):
            #kai+=1
            sengen_aru=miru(ele,used)
            #print(sengen_aru)
            break
        clook_teigi(e,child_root,ckaisou+1)
        nn+=1
    #add()#kokodeireru
    
    #print (sengen_aru)
for ele in list(root):
    clook_teigi(ele,n_root,kaisou+1)

cod=0
def look_mark(ele,n_root,kaisou):
    co=0
    global cod
    cod=0
    mae=ele.tag
    for e in ele.getiterator():
        if(e.tag=="forStatement" and mae=="pragma"):
            e.set("kai",co)
            co+=1
        if(e.tag=="forStatement" or e.tag=="whileStatement"):
            e.set("kaid",cod)
            cod+=1
        mae=e.tag
#    print(cod) #
look_mark(root[2],n_root,kaisou+1)

parent_map=dict((c,p)for p in root.getiterator() for c in p)


def shitamiru(ele,ch_d,lld):
    mae=ele.tag
    ls=""
    for e in list(ele):
        if(e.tag=="arrayAddr"):
            ff=0
            for l in lld:
                #print(e.tag,e.text,l)
                if(e.text==l):
                    ff=1
            if(ff==0):
                lld.append(e.text)
        if(mae=="pragma" and e.tag=="forStatement"):
            continue
        shitamiru(e,ch_d,lld)
        mae=e.tag
    return lld

lls=[0]*cod
def cccat(ele,ch_e):
    global kanrid
    global lls
    ll=ch_e.items()
    #print(ele.tag)
    #return 
    if(ele.tag=="forStatement" or ele.tag=="whileStatement"):
        lld=[]
        d=0
        lld=ele.items()
        for l in lld:
            if(l[0]=="kaid"):
                #print(l)
                d=l[1]
                break
        lld=[]
        lls[d]=shitamiru(ele,ch_e,lld)
        #print(lls)
        #print(d,lls[d])
#        lls[lld]="a"
#        lls[lld].append()
    elif(parent_map.get(ele).tag=="globalDeclarations"):
        #lls[d]=shitamiru(ele,ch_d,lld,ll,ka,d)
        #print(ll[3][1],kanrid[ll[3][1]][1])
        return
    cccat(parent_map.get(ele),ch_e)
    #parent_map=d
    

def clook_loopd(ele,child_root,ckaisou):
    global kai
    global kosuu
    global used
    mae=ele.tag
    for e in list(ele):
        #print(ele.tag)
        if(e.tag=="forStatement"):
            cccat(ele,e)
        if(mae!="pragma"):
            clook_loopd(e,child_root,ckaisou+1)
        mae=e.tag
    #for e in list(ele):
    
#for ele in list(root):
#print(root[0].tag,root[1].tag,root[2].tag)
clook_loopd(root[2],n_root,kaisou+1)

print("used",used)
print("teiginoarinashi",basho)
print(kanrid)
print("中で使うからここで定義しちゃいや",lls)

data_inout=[0]*cod
def cool_pra(ele,ee,ff,pp,ld):
    global data_inout
    ka=""
    kad=""
    for e in ele.items():
        if(e[0]=='kaid'):
            kad=e[1]
    if(ele.tag=="forStatement" or ele.tag=="whileStatement"):
        #print ("kk",kanrid[pp][1],lls[ff],lls[kad],pp,ff,kad,ld)
        ll=[]
        for e in ld:
            for l in lls[kad]:
                if(e==l):
                    ll.append(e)    
                    ld.remove(l)
        #print("zz",ld,ll)
        for e in ee.items():
            if(e[0]=='kaid'):
                ka=e[1]
                #        for e in ll:
        #print(data_inout,ka)
        data_inout[ka]=ll#######################バグがあるかも
            #ee.set("in",e)
            #ee.set("out",e)
        #print(data_inout,ka)
        ee=ele
    elif(parent_map.get(ele).tag=="globalDeclarations"):
        #print("ff",ld)
        for e in ee.items():
            if(e[0]=='kaid'):
                ka=e[1]
        data_inout[ka]=ld
        #for e in ld:
            #ee.set("in",e)
            #ee.set("out",e)
        return ld
    cool_pra(parent_map.get(ele),ee,ff,pp,ld)

getit=[]
for e in root.getiterator():##どれにデータを入れれば良いかを見る
    getit.append(e)    #    if(e.tag=="forStatement"):
    #print(e.tag,e.items(),e.text)

#print(getit.tag,getit.items(),getit.text)

looco=0
praco=0
def cool(ele):
    global looco
    global praco
    mae=ele.tag
    for e in list(ele):
        if(mae=="pragma" and e.tag=="forStatement"):
            print("pla",praco)
            list_data=kanrid[praco][1]
            #print(list_data)
            list_data=cool_pra(ele,e,looco,praco,list_data)
            #print("aa",list_data)
        if(e.tag=="forStatement" or e.tag=="whileStatement"):
            looco+=1
        if(mae=="pragma"):
            praco+=1;
        mae=e.tag
        cool(e)

cool(root)
    
#print(getit)
# for e in reversed(getit):
#     for l in used:
#         if(e.tag==arrayAddre.text==l):

#             if()
#     #print(e.tag, e.text, e.items())


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
        elif(b[0]=='kai' or b[0]=='kaid'):
            b=b
        else:
            i_root.set(b[0],b[1])
            
def hantei_bef(ele,n_root,pra):#条件によって書き加える
    global line1
    global line2
    #global 
    a=ele.items()
    sw=yan=0
    ff=0
    for b in a:
        if(b[0]=='file'):
            for sw,c in enumerate(line1):
                if(c==b[1]):
                    break
        if(b[0]=='lineno'):
            yan=int(b[1])
        if(b[0]=='praflag'):
            ff=1
    if(ele.tag=="forStatement" or ele.tag=="whileStatement"):
        # for e in ele.items():
        for e in ele.items():
            if(e[0]=='kaid'):
                ka=e[1]
        if(data_inout[ka]!=0):
            if(data_inout[ka]!=[]):
                #print("data_add",data_inout[ka],ka)#############バグがあるかも
                sub=ET.SubElement(n_root,'pragma')
                sub.set('lineno',str(yan+line2[sw]))
                sub.text="acc update device"
                print(data_inout[ka])
                sub.text+=" ("
                f=0
                for l in data_inout[ka]:
                    if(f==0):
                        sub.text+=str(l)
                        f=1
                    else:
                        sub.text+=","+str(l)
                sub.text+=") "
                line2[sw]+=1
                #print(sub.text)
                #print("data_in!")
                if(pra==1):
                    for e in ele.items():
                        if(e[0]=='kai'):
                            ka=e[1]
                    subpra=ET.SubElement(n_root,'pragma')
                    subpra.set('lineno',str(yan+line2[sw]))
                    subpra.text="acc kernels present("
                    f=0
                    for l in kanrid[ka][2]:
                        if(f==0):
                            subpra.text+=str(l)
                            f=1
                        else:
                            subpra.text+=","+str(l)
                    subpra.text+=") "
                    line2[sw]+=1

                    


#    if(ele.tag==""):
print("used",used)
print("teiginoarinashi",basho)
# def comm(ele,lis):
#     global basho
#     for e in list(ele):
#         kkk=0
#         for l in basho:
#             if(l==1):
#                 if(e.text==used[kkk]):
#                     lis.append(used[kkk])
#                     basho[kkk]=0
#             kkk+=1
#         comm(e,lis)
#     return lis

#parent_map=dict((c,p)for p in root.getiterator() for c in p)
print("inout",data_inout)

def hantei_aft(ele,n_root):
    #e=parent_map.get(ele)
    global line1
    global line2
    a=ele.items()
    sw=yan=0
    ff=0
    for b in a:
        if(b[0]=='file'):
            for sw,c in enumerate(line1):
                if(c==b[1]):
                    break
        if(b[0]=='lineno'):
            yan=int(b[1])
        if(b[0]=='praflag'):
            ff=1
    if(ele.tag=="forStatement" or ele.tag=="whileStatement"):
        # for e in ele.items():
        for e in ele.items():
            if(e[0]=='kaid'):
                ka=e[1]
        if(data_inout[ka]!=0):
            if(data_inout[ka]!=[]):
                print (ka)
                #print("data_add",data_inout[ka],ka)###########バグがあるかも
                sub=ET.SubElement(n_root,'pragma')
                sub.set('lineno',str(yan+line2[sw]))
                sub.text="acc update host"
                print(data_inout[ka])
                sub.text+=" ("
                f=0
                for l in data_inout[ka]:
                    if(f==0):
                        sub.text+=str(l)
                        f=1
                    else:
                        sub.text+=","+str(l)
                sub.text+=") "
                line2[sw]+=1
                #print(sub.text)
                #print("data_in!")

        
                
#parent_map=dict((c,p)for p in root.getiterator() for c in p)
fz=0
def hatu_pra_or_loop(ele,n_root):
    global fz
    if(fz==1):
        return
    global line1
    global line2
    a=ele.items()
    sw=yan=0
    ff=0
    for b in a:
        if(b[0]=='file'):
            for sw,c in enumerate(line1):
                if(c==b[1]):
                    break
        if(b[0]=='lineno'):
            yan=int(b[1])
        if(b[0]=='praflag'):
            ff=1

    if(ele.tag=="pragma" or ele.tag=="forStatement" or ele.tag=="whileStatement"):
        fz=1
        sub=ET.SubElement(n_root,'pragma')
        sub.set('lineno',str(yan+line2[sw]))
        sub.text="acc enter data copyin"
        sub.text+=" ("
        f=0
        for l in used:
            if(f==0):
                sub.text+=str(l)
                f=1
            else:
                sub.text+=","+str(l)
        #sub.text+=str(used[kaisu])
        sub.text+=") "
        line2[sw]+=1

    # if(ele.tag=="main"):
    #     kaisu=0
    #     for l in basho:
    #         if(l==0):
    #             sub=ET.SubElement(n_root,'pragma')
    #             sub.set('lineno',str(yan+line2[sw]))
    #             sub.text="acc enter data copyin"
    #             sub.text+=" ("
    #             sub.text+=str(used[kaisu])
    #             sub.text+=") "
    #             line2[sw]+=1
    #             kaisu+=1

    # ll=[]
    # if(ele.tag=="body"):
    #     if(1 in basho):
    #         ll=comm(ele,ll)
    #         #ll=comm(parent_map.get(ele),ll)
    #         if(len(ll)!=0):
    #             print("llll",ll)
    #             sub=ET.SubElement(n_root,'pragma')
    #             sub.set('lineno',str(yan+line2[sw]))
    #             sub.text="acc enter data copyin"
    #             sub.text+=" ("
    #             f=0
    #             for l in ll:
    #                 if(f==0):
    #                     sub.text+=str(l)
    #                     f=1
    #                 else:
    #                     sub.text+=","+str(l)
    #             #sub.text+=str(used[kaisu])
    #             sub.text+=") "
    #             line2[sw]+=1
#def hantei_pra(e,hoji,n_root):   
#    return


def make_data(ele,n_root):
    n_root=ET.SubElement(n_root,ele.tag)
    if(ele.items()):
        itmm(ele,n_root,2)
    n_root.text=ele.text
    mae=ele
    hoji=ele
    pra=0
    for e in list(ele):
        hatu_pra_or_loop(e,n_root)
        if(e.tag=="pragma" and e.text=="acc kernels"):
            hoji=e
            pra=1
            continue
        #        if(pra==1):
        #hantei_pra(e,hoji,n_root)
        #        else:
        hantei_bef(e,n_root,pra)
        pra=0
        make_data(e,n_root)
        hantei_aft(e,n_root)


        
for ele in list(root):
    make_data(ele,n_root)


string = ET.tostring(n_root, 'utf-8')
pretty_string = minidom.parseString(string).toprettyxml(indent='  ')
with open('output_ce_data.xml','w')as f:
     f.write(pretty_string)
print("fin")
