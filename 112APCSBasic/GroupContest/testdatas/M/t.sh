#!/bin/bash

for i in {1..10}; do
    oldFileName="$i.in"
    newFileName="3-$i.in"

    o="$i.out"
    n="3-$i.out"
    
    mv "$oldFileName" "$newFileName"
    mv "$o" "$n"
    
    if [ $? -ne 0 ]; then
        echo "Error renaming file: $oldFileName"
    fi
done
