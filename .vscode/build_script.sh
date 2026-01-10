#!/bin/zsh

# Check if the active file is a .cpp file
if [ "${fileExtname}" = ".cpp" ]; then
    clang++ -std=c++17 -O0 "${file}" -o "${fileDirname}/${fileBasenameNoExtension}" -stdlib=libc++ && {
        time -p "${fileDirname}/${fileBasenameNoExtension}" < "${workspaceFolder}/input.txt" > "${workspaceFolder}/output.txt"
    }
else
    echo 'Error: Not a C++ file. Please open a .cpp file and try again.'
fi