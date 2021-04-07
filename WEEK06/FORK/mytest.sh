#!/bin/bash
# REV01 Mon  5 Apr 17:08:58 WIB 2021
# START Sun  4 Apr 17:22:46 WIB 2021

# Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
# http://rahmatm.samik-ibrahim.vlsm.org/
# This program is free script/software. This program is distributed in the 
# hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: myfork00


CLEANFILE="WEEK06-MEMORY-SHARE.txt"
WEEKFILE="WEEK06-MEMORY-SHARE.bin"

TOKEN="OS211W06"

[ -f $CLEANFILE ] || { echo "No $CLEANFILE"; exit; }

sleep 1
echo "ZCZC $(date)"
echo -n "ZCZC $(./chktoken $TOKEN): "
echo "$(./verifyToken $TOKEN $(./chktoken $TOKEN))"
echo "ZCZC BINSIZE $(wc -c < $WEEKFILE)"
echo "ZCZC TXTSIZE $(wc -c < $CLEANFILE)"
FIRST=""
for II in $(cat $CLEANFILE) ; do
    [ ! -z "${II##*[!0-9]*}" ] && continue
    [ -z "$FIRST" ] && { FIRST=$II ; continue; }
    echo -n "ZCZC $FIRST $II: "
    echo "$(./verifyToken $TOKEN $FIRST $II)"
    FIRST=""
done


