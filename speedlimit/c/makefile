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

all: test speedlimit

.PHONY:
test: tests.out
	./tests.out

speedlimit: speedlimit.o libspeedlimit.o
	$(CC) $(LDFLAGS) -o speedlimit speedlimit.o libspeedlimit.o $(LDLIBS)

speedlimit.o: speedlimit.c libspeedlimit.h
	$(CC) $(CFLAGS) -c speedlimit.c $(LDLIBS)

libspeedlimit.o: libspeedlimit.c libspeedlimit.h
	$(CC) $(CFLAGS) -c libspeedlimit.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf speedlimit *.o *.out

tests.out: test_speedlimit.c libspeedlimit.c libspeedlimit.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_speedlimit.c libspeedlimit.c -o tests.out $(LDLIBS)
