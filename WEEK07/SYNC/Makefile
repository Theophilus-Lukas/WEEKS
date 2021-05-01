# REV05 Fri 16 Apr 17:00:00 WIB 2021
# REV04 Thu 15 Apr 11:02:23 WIB 2021
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
P04=makeMyShareMemory

L99=mylib

FILE1=WEEK07-MYSYNC.bin
FILE3=WEEK07-REPORT1.txt
FILE4=WEEK07-REPORT2.txt

EXECS= \
   $(P01) \
   $(P04) \


all:  $(EXECS)

test: $(EXECS)
	@echo "=====   $(P01)..."
	./$(P01)
	@echo "=====   $(P04)..."
	./$(P04)


$(EXECS): %: %.c $(DEPS) $(L99).c $(L99).h Makefile
	$(CC) $(CFLAGS)  $(L99).c $< -o $@ $(LDFLAGS)

clean:
	rm -f $(EXECS)
	rm -f *.map 
	rm -f $(FILE1) $(FILE3) $(FILE4)


.phony: clean all test install

