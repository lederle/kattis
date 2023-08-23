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

all: test speeding

.PHONY:
test: tests.out
	./tests.out

speeding: speeding.o libspeeding.o
	$(CC) $(LDFLAGS) -o speeding speeding.o libspeeding.o $(LDLIBS)

speeding.o: speeding.c libspeeding.h
	$(CC) $(CFLAGS) -c speeding.c $(LDLIBS)

libspeeding.o: libspeeding.c libspeeding.h
	$(CC) $(CFLAGS) -c libspeeding.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf speeding *.o *.out

tests.out: test_speeding.c libspeeding.c libspeeding.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_speeding.c libspeeding.c -o tests.out $(LDLIBS)
