#!/bin/bash
set -x
SOURCE_FILE=$1
FILE_NAME=$(basename $SOURCE_FILE)
TARGET_NAME=${FILE_NAME%.*}
mkdir -p out
g++ -g -o out/$TARGET_NAME $SOURCE_FILE
set +x
