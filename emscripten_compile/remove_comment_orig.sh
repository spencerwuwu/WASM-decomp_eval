#!/bin/bash

replace_c_in_dir() {
    DIR=$1
    c_files=$(find $DIR -name "*.c")
    for c_file in $c_files; do
        echo "Processing $c_file"
        gcc -fpreprocessed -dD -E $c_file > "${c_file}.tmp"
        mv "${c_file}.tmp" $c_file
    done

}

replace_c_in_dir ./
