#!/bin/bash

mkdir -p bin

SCRIPT_NAME=$(basename $0)

find . -type f -executable ! -path "./bin/*" ! -name "$SCRIPT_NAME" | while read file; do

    filename=$(basename "$file")

    mv "$file" "bin/$filename"
    
    echo "Copied $file to bin/$filename"
done

