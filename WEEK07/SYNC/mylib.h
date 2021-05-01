/*
 * Copyright (C) 2021-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: mylib.h
 * REV04 Sat 17 Apr 08:24:40 WIB 2021
 * REV03 Fri 16 Apr 11:04:18 WIB 2021
 * REV02 Thu 15 Apr 09:19:46 WIB 2021
 * REV01 Tue 13 Apr 07:08:12 WIB 2021
 * START Sat 10 Apr 16:11:24 WIB 2021
 *
 */

#define FILE1          "WEEK07-MYSYNC.bin"
#define FILE3          "WEEK07-REPORT1.txt"
#define FILE4          "WEEK07-REPORT2.txt"
#define TOKEN          "OS211W07"
#define BUFFERSIZE     256
#define OS211SIZE      256
#define SHA1SIZE       6
#define LOCKSIZE       14
#define MYDELAY        1

#define CMDDATE        "date +%y%m%d-%H%M%S"
#define CMDSHA1        "echo %s | sha1sum | tr '[:lower:]' '[:upper:]'"
#define CHMOD          0666
#define MYFLAGS        O_CREAT|O_RDWR
#define MYPROTECTION   PROT_READ|PROT_WRITE
#define MYVISIBILITY   MAP_SHARED
#define RANDOMDEV      "/dev/urandom"

// #include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
// #include <sys/wait.h>
#include <time.h>
#include <unistd.h>

typedef           char  Chr;
typedef           char* ChrPtr;
typedef  unsigned char  uChr;
typedef  unsigned char* uChrPtr;
typedef  unsigned long  int uLongInt;
typedef           void* voidPtr;
typedef  struct {
    Chr myStamp[BUFFERSIZE];
} memStruct1;
typedef memStruct1* memStruct1Ptr;
typedef  struct {
    Chr myLock  [LOCKSIZE];
    Chr newline;
    Chr myStamp [BUFFERSIZE];
    Chr allStamp[BUFFERSIZE*OS211SIZE];
} memStruct2;
typedef memStruct2* memStruct2Ptr;
typedef struct timespec myTime;

voidPtr createShareMemory(ChrPtr memoryName, int memorySize);
uChrPtr createStamp      (uChrPtr input);
int     deltaTime        (ChrPtr stamp1, ChrPtr  stamp2);
uChrPtr getTimeStamp     (void);
void    mySleep          (int second);
uChrPtr mySHA1           (uChrPtr input, int length);
void    sameAndExit      (ChrPtr string1, ChrPtr string2, ChrPtr message);
void    sameOrExit       (ChrPtr string1, ChrPtr string2, ChrPtr message);
int     str2sec          (ChrPtr stamp);
void    testtest         (void);
uChrPtr verifyStamp      (uChrPtr input, uChrPtr stamp);


