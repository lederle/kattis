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

all: test bitteeinbit

.PHONY:
test: tests.out
	./tests.out

bitteeinbit: bitteeinbit.o libbitteeinbit.o
	$(CC) $(LDFLAGS) -o bitteeinbit bitteeinbit.o libbitteeinbit.o $(LDLIBS)

bitteeinbit.o: bitteeinbit.c libbitteeinbit.h
	$(CC) $(CFLAGS) -c bitteeinbit.c $(LDLIBS)

libbitteeinbit.o: libbitteeinbit.c libbitteeinbit.h
	$(CC) $(CFLAGS) -c libbitteeinbit.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf bitteeinbit *.o *.out

tests.out: test_bitteeinbit.c libbitteeinbit.c libbitteeinbit.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_bitteeinbit.c libbitteeinbit.c -o tests.out $(LDLIBS)
