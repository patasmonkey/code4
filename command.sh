#!/bin/sh

export LANG=C
export LC_ALL=C
pgcc -acc -E a_pg.c > a_pg.i
C_Front --no-builtin-va-arg a_pg.i > a.xml
#python3 kakikuwae_loopizon.py
#C_Back output.xml >out.c
C_Back a.xml > out.c
pgcc -acc -fastsse -O3 -Minfo=accel out.c -ta=tesla:cc60 -lm -o yansu
