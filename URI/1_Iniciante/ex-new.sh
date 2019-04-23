#!/bin/bash

EXERCISE_NUMBER=$1

mkdir -p $EXERCISE_NUMBER

for i in $(seq 1 3); do
    >$EXERCISE_NUMBER/${EXERCISE_NUMBER}_$i.in
done

