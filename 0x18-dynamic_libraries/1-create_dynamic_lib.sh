#!/bin/bash

# Compile *.c to *.o
gcc *.c -c -fPIC

# Create libdynamic.so
gcc *.o -shared -o libll.so

# Clean up temporary object files
rm *.o
