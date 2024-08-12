#!/bin/bash

for i in {1..2}; do
    oldFileName="$i.in"
    newFileName="2-$i.in"
    
    mv "$oldFileName" "$newFileName"
    
    if [ $? -ne 0 ]; then
        echo "Error renaming file: $oldFileName"
    fi
done
