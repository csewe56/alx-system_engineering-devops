#!/usr/bin/env bash
# Displays hours: 0-12, minutes 1-59

h=0
while [ "$h" -le 12 ]
do
echo "Hour: $h"
(( h++ ))

m=1
while [ "$m" -le 59 ]
do
echo "$m"
(( m++ ))
done
done
