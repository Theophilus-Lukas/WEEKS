/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: makeMyShareMemory
 * REV02 Fri 16 Apr 2021 15:12:00 WIB
 * REV01 Thu 15 Apr 11:00:10 WIB 2021
 * START Tue 13 Apr 08:03:44 WIB 2021
 */

#include "mylib.h"

int main(void) {
    close(STDOUT_FILENO);
    int fd = open(FILE3, O_CREAT | O_RDWR | O_TRUNC, CHMOD);
    printf("ZCZC A01 open ");
    if (fd < 0) {
        printf("%s (FAILED) ======\n", FILE3);
        exit(0);
    }
    printf("%s (SUCCESS)\n", FILE3);
    printf("ZCZC A02 hostname ");
    fflush(NULL);
    system("hostname");
    uChrPtr stamp=createStamp(TOKEN);
    printf("ZCZC A03 createStamp %s %s\n",    TOKEN, stamp);
    printf("ZCZC A04 verifyStamp %s %s %s\n", TOKEN, stamp, verifyStamp(TOKEN, stamp));
    memStruct1Ptr  mymap = createShareMemory(FILE1, strlen(stamp)+3);
    strcpy(mymap->myStamp, stamp);
    strcat(mymap->myStamp, " \n");
    free(stamp);
}

