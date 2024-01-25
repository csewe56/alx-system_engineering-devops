#!/usr/bin/env bash
# This script groups visitors by IP and HTTP status code, displaying occurrence number, IP, and HTTP code.

awk '{print $1, $9}' apache-access.log | sort | uniq -c | sort -nr | awk '{print $1, $2, $3}'

