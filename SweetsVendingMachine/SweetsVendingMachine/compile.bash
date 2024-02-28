#!/bin/bash

# Find all CPP files in the current directory
cpp_files=$(find . -name '*.cpp')

# Compile all the files with g++ and create the executable file "main"
g++ -std=c++11 -o ./main $cpp_files

# Run the executable file "main"
./main