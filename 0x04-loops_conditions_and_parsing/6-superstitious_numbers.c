#!/usr/bin/env bash
# Prints 1 to 20; "bad luck from China" the 4th,
# "bad luck from Japan" the 9th, and "bad luck from Italy" the 17th
i=1
while [ "$i" -le 20 ]
do
echo "$i"
case $i in
4) echo "bad luck from China" ;;
9) echo "bad luck from Japan" ;;
17) echo "bad luck from Italy" ;;
 esac
(( i++ ))
done
