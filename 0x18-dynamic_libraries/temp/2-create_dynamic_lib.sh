#!/bin/bash
gcc -c *.c
gcc -shared -o libdynamic.so  *.o
# TASK 1:
# This script creates a dynamic library called
# (libdynamic.so) from all the .c files that are
# in the current directory.
