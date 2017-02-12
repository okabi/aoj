#!/bin/sh

exename="a.exe"

if [ $# -lt 1 ]; then
    echo "Please input cpp filename: "
    read filename
else
    filename=$1
fi

g++ -static-libstdc++ -std=c++11 -o $exename $filename
if [ $? -eq 0 ]; then
    ./$exename
fi
