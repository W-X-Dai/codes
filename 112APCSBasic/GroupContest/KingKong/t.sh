#!/bin/bash

for i in {1..9}; do
    oldFileName="in_$i.in"
    newFileName="$i.in"

    o="out_$i.out"
    n="$i.out"
    
    mv "$oldFileName" "$newFileName"
    mv "$o" "$n"
    
    if [ $? -ne 0 ]; then
        echo "Error renaming file: $oldFileName"
    fi
done
