#!/usr/bin/env bash

# This script displays the content of /etc/passwd with username, user id, and home directory.

while IFS=: read -r user _ uid _ home _; do
    echo "Username: $user"
    echo "User ID: $uid"
    echo "Home Directory: $home"
done < /etc/passwd

