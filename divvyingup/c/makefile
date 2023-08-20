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

all: test divvyingup

.PHONY:
test: tests.out
	./tests.out

divvyingup: divvyingup.o libdivvyingup.o
	$(CC) $(LDFLAGS) -o divvyingup divvyingup.o libdivvyingup.o $(LDLIBS)

divvyingup.o: divvyingup.c libdivvyingup.h
	$(CC) $(CFLAGS) -c divvyingup.c $(LDLIBS)

libdivvyingup.o: libdivvyingup.c libdivvyingup.h
	$(CC) $(CFLAGS) -c libdivvyingup.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf divvyingup *.o *.out

tests.out: test_divvyingup.c libdivvyingup.c libdivvyingup.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_divvyingup.c libdivvyingup.c -o tests.out $(LDLIBS)
