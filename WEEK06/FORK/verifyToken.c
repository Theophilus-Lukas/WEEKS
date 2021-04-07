/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: TOP (Table of Processes)
 * REV02 Sun 04 Apr 2021 07:24:22 WIB
 * REV01 Sun 04 Apr 2021 00:11:27 WIB
 * START Sat 03 Apr 2021 15:10:28 WIB
 */

#include "mylib.h"

int main(int argc, ChrPtr argv[]) {
    if (argc < 4) return -1;
    uChr     result1[BUFFERSIZE];
    uChr     result2[BUFFERSIZE];
    strcpy(result1,argv[2]);
    strcat(result1," ");
    strcat(result1,argv[3]);
    verifyToken(result2, argv[1], result1);
    printf("%s\n", result2);
}

