#!/bin/bash

gcc -fPIC -c *.c
gcc -shared -Wl,-soname,libdynamic.so *.o -o libdynamic.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
