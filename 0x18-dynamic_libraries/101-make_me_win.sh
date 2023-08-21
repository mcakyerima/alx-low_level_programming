#!/bin/bash

# Compile the shared library
gcc -shared -o libwin.so -fPIC win.c

# Export LD_PRELOAD to load the library before executing gm
export LD_PRELOAD=./libwin.so

# Run gm with your chosen numbers
./gm 9 8 10 24 75 9

# Clean up
unset LD_PRELOAD
rm libwin.so
