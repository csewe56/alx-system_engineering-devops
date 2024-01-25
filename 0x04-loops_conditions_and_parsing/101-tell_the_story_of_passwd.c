#!/usr/bin/env bash
# This script displays information about users from /etc/passwd using a while loop and IFS.

while IFS=: read -r username _ uid gid info home shell; do
    echo "The user $username is part of the $gid gang, lives in $home, and rides $shell."
    echo "USER ID's place is protected by the passcode $info, more info about the user here: $uid INFO"
done < /etc/passwd

