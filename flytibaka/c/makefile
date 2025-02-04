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

all: test flytibaka

.PHONY:
test: tests.out
	./tests.out

flytibaka: flytibaka.o libflytibaka.o
	$(CC) $(LDFLAGS) -o flytibaka flytibaka.o libflytibaka.o $(LDLIBS)

flytibaka.o: flytibaka.c libflytibaka.h
	$(CC) $(CFLAGS) -c flytibaka.c $(LDLIBS)

libflytibaka.o: libflytibaka.c libflytibaka.h
	$(CC) $(CFLAGS) -c libflytibaka.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf flytibaka *.o *.out

tests.out: test_flytibaka.c libflytibaka.c libflytibaka.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_flytibaka.c libflytibaka.c -o tests.out $(LDLIBS)
