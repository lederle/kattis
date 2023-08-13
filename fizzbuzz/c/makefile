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

all: test fizzbuzz

.PHONY:
test: tests.out
	./tests.out

fizzbuzz: fizzbuzz.o libfizzbuzz.o
	$(CC) $(LDFLAGS) -o fizzbuzz fizzbuzz.o libfizzbuzz.o $(LDLIBS)

fizzbuzz.o: fizzbuzz.c libfizzbuzz.h
	$(CC) $(CFLAGS) -c fizzbuzz.c $(LDLIBS)

libfizzbuzz.o: libfizzbuzz.c libfizzbuzz.h
	$(CC) $(CFLAGS) -c libfizzbuzz.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf fizzbuzz *.o *.out

tests.out: test_fizzbuzz.c libfizzbuzz.c libfizzbuzz.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_fizzbuzz.c libfizzbuzz.c -o tests.out $(LDLIBS)
