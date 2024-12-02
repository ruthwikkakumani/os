#!/bin/bash

echo "Enter a directory path"
read dir

if [ -d "$dir" ];
 then
  for file in "$dir"/*; 
  do
    if [ -f "$file" ]
     then
       echo "$file"
    fi
  done
else
  echo "Directory $dir does not exist."
fi
