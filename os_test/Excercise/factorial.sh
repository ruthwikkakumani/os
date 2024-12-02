#!/bin/bash

echo "Enter a number"
read number

fact=1
i=1

while [ $i -le $number ]
do
  fact=$(($fact * $i))
  i=$(($i + 1))
done

echo "Factorial of $number is : $fact"
