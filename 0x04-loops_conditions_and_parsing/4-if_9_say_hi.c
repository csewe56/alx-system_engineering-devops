#!/usr/bin/env bash
# This script displays "Best School" 10 times and says "Hi" during the 9th
i=1
while [ "$i" -le 10 ]
do
 echo "Best School"
 if [ "$i" -eq 9 ]; then
echo "Hi"
 fi
 (( i++ ))
done
