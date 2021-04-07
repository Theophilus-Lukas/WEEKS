/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: myfork00
 * START Sun 04 Apr 2021 11:00:01 AM WIB
 */

#include "mylib.h"

int main(void) {
    memStructPtr  mymap = createShareMemory(mymap, sizeof(memStruct), WEEKFILE);
    mymap->counter='1';
    int counter=mymap->counter-'1';
    mymap->blank=' ';
    mymap->end='\n';
    mymap->zero=0;
    uChr      result1[BUFFERSIZE];
    chktoken (result1, TOKEN);
    if (fork() == 0) {
        sleep(1);
        mymap->counter++;
        counter=mymap->counter-'1';
        chktoken (result1, TOKEN);
        if (fork() == 0) {
            sleep(1);
            mymap->counter++;
            counter=mymap->counter-'1';
            chktoken (result1, TOKEN);
            if (fork() == 0) {
                sleep(1);
                mymap->counter++;
                counter=mymap->counter-'1';
                chktoken (result1, TOKEN);
            }
            wait(NULL);
        }
        wait(NULL);
    }
    wait(NULL);
    strcpy(mymap->stamp[counter], result1);
    strcat(mymap->stamp[counter], " ");
    printf("PID[%d][%s]-[%d]\n", getpid(), result1, counter);
    wait(NULL);
}

