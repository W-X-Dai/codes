#!/bin/bash

for i in {7..16}; do
    oldFileName="t$i.in"
    newFileName="3-$i.in"

    o="t$i.out"
    n="3-$i.out"
    
    mv "$oldFileName" "$newFileName"
    mv "$o" "$n"
    
    if [ $? -ne 0 ]; then
        echo "Error renaming file: $oldFileName"
    fi
done
