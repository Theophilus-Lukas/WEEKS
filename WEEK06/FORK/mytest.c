/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: TOP (Table of Processes)
 * REV01 Sun 04 Apr 2021 00:11:59 WIB
 * START Sat 03 Apr 2021 15:10:28 WIB
 */

#include "mylib.h"

int main(void) {
    uChr     result1[BUFFERSIZE];
    chktoken (result1, TOKEN);
    printf("%s\n", result1);
    uChr     result2[BUFFERSIZE];
    verifyToken (result2, TOKEN, result1);
    printf("%s: %s\n", TOKEN, result2);
    verifyToken (result2, "DODOLGRT", "rms46 0605-0687");
    printf("%s: %s\n", "DODOLGRT", result2);
    verifyToken (result2, "DODOLGRT", "rms46 1820-2A46");
    printf("%s: %s\n", "DODOLGRT", result2);
    sleep (1);
    chktoken (result1, TOKEN);
    printf("%s\n", result1);
    pickToken(result2, result1);
    printf("%s\n", result2);
}

