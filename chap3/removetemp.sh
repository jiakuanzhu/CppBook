#!/bin/bash         

for file in $(ls *.cc)
do
    sed '1,28d' $file > $file.2.cc
done


