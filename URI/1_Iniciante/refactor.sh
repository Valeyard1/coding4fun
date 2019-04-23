#!/usr/bin/env bash

for file in *; do
    if [[ -f $file ]]; then
        EXERCISE_DIR=${file%.*}
        FILE_EXTENSION=${file##*.}

        if [[ X"$FILE_EXTENSION" = X"py" || X"$FILE_EXTENSION" = X"c" || X"$FILE_EXTENSION" = X"cpp" ]]; then
            mkdir -p $EXERCISE_DIR
            mv $file $EXERCISE_DIR
        fi
    fi
done
