#!/bin/bash

echo "Enter a number :"
read number

rev=0

while [ $number -gt 0 ]
do
  digit=$(($number % 10))
  rev=$(($rev * 10 + $digit))
  number=$(($number / 10))
done

echo "Reverse of a number is : $rev"
