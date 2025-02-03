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
# CFLAGS += -Werror
CFLAGS += -Wmissing-declarations

all: test digitswap

.PHONY:
test: tests.out
	./tests.out

digitswap: digitswap.o libdigitswap.o
	$(CC) $(LDFLAGS) -o digitswap digitswap.o libdigitswap.o $(LDLIBS)

digitswap.o: digitswap.c libdigitswap.h
	$(CC) $(CFLAGS) -c digitswap.c $(LDLIBS)

libdigitswap.o: libdigitswap.c libdigitswap.h
	$(CC) $(CFLAGS) -c libdigitswap.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf digitswap *.o *.out

tests.out: test_digitswap.c libdigitswap.c libdigitswap.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_digitswap.c libdigitswap.c -o tests.out $(LDLIBS)
