#!/bin/bash

EXERCISE=$1

cd $EXERCISE

for file in $(ls *.in); do
    printf "%s\n" "file $file"
    python3 $EXERCISE.py < $file
    echo
done
