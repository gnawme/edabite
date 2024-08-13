#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 filename"
    exit 1
fi

filename="$1"

basename="${filename%.*}"

g++ -std=c++17 -Werror -fsanitize=address -o "$basename" "$filename"
