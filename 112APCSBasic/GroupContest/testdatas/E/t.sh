#!/bin/bash

for i in {4..11}; do
    oldFileName="1-$i.in"
    newFileName="3-$i.in"

    o="1-$i.out"
    n="3-$i.out"
    
    mv "$oldFileName" "$newFileName"
    mv "$o" "$n"
    
    if [ $? -ne 0 ]; then
        echo "Error renaming file: $oldFileName"
    fi
done
