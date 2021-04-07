# REV03 Mon 05 Apr 17:55:47 WIB 2021
# REV02 Sun 04 Apr 07:22:23 WIB 2021
# REV01 Sat 03 Apr 10:51:58 WIB 2021
# START Tue 13 Sep 11:44:18 WIB 2016

# INFO: With this "Makefile", just run:
# INFO:                     make

CC            = gcc
CPP           = cpp
CFLAGS        = -std=gnu18
LDFLAGS       = 
CPPFLAGS      =
DEPFLAGS      = -MM -MT $(@:.d=.o) 
OUTPUT_OPTION = -o $@
COMPILE       = $(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) -c
SRCS          = $(wildcard *.c)
OBJ           = $(SRCS:.c=.o)
DEP           = $(OBJ:.o=.d)
PROGS         = $(SRCS:.c=  )

P01=mytest
P02=chktoken
P03=verifyToken
P04=myfork

L99=mylib
WEEKFILE=WEEK06-MEMORY-SHARE.bin
CLEANFILE=WEEK06-MEMORY-SHARE.txt

EXECS= \
   $(P01) \
   $(P02) \
   $(P03) \
   $(P04) \


all:  $(EXECS)

test: $(EXECS)
	./$(P04) 
	cat $(WEEKFILE) | wc -c > $(CLEANFILE)
	cat $(WEEKFILE) | tr -dc '[:alnum:]\n -_' >> $(CLEANFILE)
	bash mytest.sh

$(EXECS): %: %.c $(DEPS) $(L99).c
	$(CC) $(CFLAGS)  $(L99).c $< -o $@ $(LDFLAGS)

clean:
	rm -f $(EXECS)
	rm -f *.map 
	rm -f $(WEEKFILE) $(CLEANFILE)

.phony: clean all test

