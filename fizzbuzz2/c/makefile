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

all: test fizzbuzz2

.PHONY:
test: tests.out
	./tests.out

fizzbuzz2: fizzbuzz2.o libfizzbuzz2.o
	$(CC) $(LDFLAGS) -o fizzbuzz2 fizzbuzz2.o libfizzbuzz2.o $(LDLIBS)

fizzbuzz2.o: fizzbuzz2.c libfizzbuzz2.h
	$(CC) $(CFLAGS) -c fizzbuzz2.c $(LDLIBS)

libfizzbuzz2.o: libfizzbuzz2.c libfizzbuzz2.h
	$(CC) $(CFLAGS) -c libfizzbuzz2.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf fizzbuzz2 *.o *.out

tests.out: test_fizzbuzz2.c libfizzbuzz2.c libfizzbuzz2.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_fizzbuzz2.c libfizzbuzz2.c -o tests.out $(LDLIBS)
