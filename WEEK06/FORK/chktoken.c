/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: chktoken TOKEN
 * REV02 Sun 04 Apr 2021 08:05:57 WIB
 * REV01 Sun 04 Apr 2021 00:11:27 WIB
 * START Sat 03 Apr 2021 15:10:28 WIB
 */

#include "mylib.h"

int main(int argc, ChrPtr argv[]) {
    if (argc < 2) return -1;
    uChr     result1[BUFFERSIZE];
    chktoken (result1, argv[1]);
    printf("%s\n", result1);
}

