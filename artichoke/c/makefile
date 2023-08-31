.POSIX:
.SUFFIXES:

CC = gcc
LDLIBS = -lm

CFLAGS = -std=gnu11
CFLAGS += -g
CFLAGS += -Og
CFLAGS += -DUNITY_SUPPORT_64 -DUNITY_OUTPUT_COLOR -DUNITY_INCLUDE_DOUBLE

# This is the optimization used on kattis
# CFLAGS += -O2

# These are further exercism flags
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -pedantic
# CFLAGS += -Werror
CFLAGS += -Wmissing-declarations

all: test artichoke

.PHONY:
test: tests.out
	./tests.out

artichoke: artichoke.o libartichoke.o
	$(CC) $(LDFLAGS) -o artichoke artichoke.o libartichoke.o $(LDLIBS)

artichoke.o: artichoke.c libartichoke.h
	$(CC) $(CFLAGS) -c artichoke.c $(LDLIBS)

libartichoke.o: libartichoke.c libartichoke.h
	$(CC) $(CFLAGS) -c libartichoke.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf artichoke *.o *.out

tests.out: test_artichoke.c libartichoke.c libartichoke.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_artichoke.c libartichoke.c -o tests.out $(LDLIBS)
