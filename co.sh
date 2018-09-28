#!/bin/sh

pgcc -acc -fastsse -O3 -Minfo=accel a_pg.c -ta=tesla:cc60 -lm -E > a_pg.i
C_Front a_pg.i > a.xml
