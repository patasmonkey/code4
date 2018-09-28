#!/bin/sh

gcc -E $1.c -lm -o $1.i
C_Front $1.i > $1.xml
python3 kakikuwae_loopizon.py
C_Back output.xml >out.c
gcc out.c -lm -o out
python3 loop_data.py
C_Back output_ce_data.xml >ooo.c
gcc ooo.c -lm 


