#!/bin/bash

echo "Enter a number: "
read num

for ((i=1; i<=10; i++))
do
  mul=$(($num * $i))
  echo "$num x $i = $mul"
done
