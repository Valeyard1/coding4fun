#!/bin/bash

EXERCISE_NUMBER=$1

mkdir -p $EXERCISE_NUMBER
>$EXERCISE_NUMBER/$EXERCISE_NUMBER.py

for i in $(seq 1 3); do
    >$EXERCISE_NUMBER/${EXERCISE_NUMBER}_$i.in
done

cd $EXERCISE_NUMBER
