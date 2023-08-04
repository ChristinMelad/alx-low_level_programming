#!/bin/bash
gcc -c -wall -werror -wextra *.c
ar rc liball.a *.o
ran liball.a
