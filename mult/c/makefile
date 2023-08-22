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

all: test mult

.PHONY:
test: tests.out
	./tests.out

mult: mult.o libmult.o
	$(CC) $(LDFLAGS) -o mult mult.o libmult.o $(LDLIBS)

mult.o: mult.c libmult.h
	$(CC) $(CFLAGS) -c mult.c $(LDLIBS)

libmult.o: libmult.c libmult.h
	$(CC) $(CFLAGS) -c libmult.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf mult *.o *.out

tests.out: test_mult.c libmult.c libmult.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_mult.c libmult.c -o tests.out $(LDLIBS)
