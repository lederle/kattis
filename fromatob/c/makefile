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

all: test fromatob

.PHONY:
test: tests.out
	./tests.out

fromatob: fromatob.o libfromatob.o
	$(CC) $(LDFLAGS) -o fromatob fromatob.o libfromatob.o $(LDLIBS)

fromatob.o: fromatob.c libfromatob.h
	$(CC) $(CFLAGS) -c fromatob.c $(LDLIBS)

libfromatob.o: libfromatob.c libfromatob.h
	$(CC) $(CFLAGS) -c libfromatob.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf fromatob *.o *.out

tests.out: test_fromatob.c libfromatob.c libfromatob.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_fromatob.c libfromatob.c -o tests.out $(LDLIBS)
