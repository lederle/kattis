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

all: test stararrangements

.PHONY:
test: tests.out
	./tests.out

stararrangements: stararrangements.o libstararrangements.o
	$(CC) $(LDFLAGS) -o stararrangements stararrangements.o libstararrangements.o $(LDLIBS)

stararrangements.o: stararrangements.c libstararrangements.h
	$(CC) $(CFLAGS) -c stararrangements.c $(LDLIBS)

libstararrangements.o: libstararrangements.c libstararrangements.h
	$(CC) $(CFLAGS) -c libstararrangements.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf stararrangements *.o *.out

tests.out: test_stararrangements.c libstararrangements.c libstararrangements.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_stararrangements.c libstararrangements.c -o tests.out $(LDLIBS)
