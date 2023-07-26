.POSIX:
.SUFFIXES:

CC = gcc
LDLIBS = -lm

CFLAGS = -std=gnu11
CFLAGS += -g
CFLAGS += -Og
CFLAGS += -DUNITY_SUPPORT_64 -DUNITY_OUTPUT_COLOR

# This is the optimization used on kattis
# CFLAGS += -O2

# These are further exercism flags
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -pedantic
CFLAGS += -Werror
CFLAGS += -Wmissing-declarations

all: test r2

.PHONY:
test: tests.out
	./tests.out

r2: r2.o libr2.o 
	$(CC) $(LDFLAGS) -o r2 r2.o libr2.o $(LDLIBS)

r2.o: r2.c libr2.h
	$(CC) $(CFLAGS) -c r2.c

libr2.o: libr2.c libr2.h
	$(CC) $(CFLAGS) -c libr2.c

.PHONY: clean
clean:
	rm -rf *.o *.out r2

tests.out: test_r2.c libr2.c libr2.h
	@echo Compiling $@
	$(CC) $(CFLAGS) test-framework/unity.c test_r2.c libr2.c -o tests.out $(LIBS)
