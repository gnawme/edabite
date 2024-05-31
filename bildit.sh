#!/bin/bash

for SRC in "$@"
do
g++ -g -I. $SRC.cpp -std=c++1z -Werror -fsanitize=address -o $SRC -g
done