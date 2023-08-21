#!/bin/bash

echo 'int rand(void) { return 6; }' > win.c && gcc -shared -o libwin.so -fPIC win.c && export LD_PRELOAD=./libwin.so && ./gm 9 8 10 24 75 9

