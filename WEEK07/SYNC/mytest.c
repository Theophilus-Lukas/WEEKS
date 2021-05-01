/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: mytest.c
 * REV03: Sat 17 Apr 08:23:43 WIB 2021
 * REV02: Thu 15 Apr 11:32:54 WIB 2021
 * REV01: Tue 13 Apr 07:01:59 WIB 2021
 * START: Sat 10 Apr 16:14:46 WIB 2021
 */

#include "mylib.h"

int main(void) {
    printf("mySHA1[%s][%s]\n", "INPUT", mySHA1("INPUT", SHA1SIZE));
    printf("getTimeStamp[%s]\n", getTimeStamp());
    uChrPtr stamp=createStamp ("INPUT");
    printf("createStamp[%s]\n", stamp);
    printf("verifyStamp[%s %s]: %s\n", "INPUT", stamp, verifyStamp("INPUT", stamp));
    memStruct1Ptr  mymap1 = createShareMemory(FILE1, sizeof(memStruct1));
    printf("START: LOOP...\n");
    for (int ii=0; ii < 2; ii++) {
        system("date");
        fflush(NULL);
        mySleep(MYDELAY);
    }
    system("date");
    fflush(NULL);
    printf("END: LOOP...\n");
    printf("DELTA 210413-235959 210414-000001 [%d]\n", deltaTime("210413-235959", "210414-000001"));
    printf("str2sec 450817-100000 %d\n", str2sec("450817-100000"));
    printf("str2sec 210817-100000 %d\n", str2sec("210817-100000"));
    testtest();
    sameOrExit("SAME", "SAME", "NOT EXIT!\n");
    sameAndExit("AME", "SAME", "BYEBYE!\n");
}



