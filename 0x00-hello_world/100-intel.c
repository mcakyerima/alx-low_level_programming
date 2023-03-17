#!/bin/bash
gcc -masm=intel $CFILE -S > $(echo $CFILE|cut -f 1 -d '.').s
