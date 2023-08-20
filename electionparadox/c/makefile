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

all: test electionparadox

.PHONY:
test: tests.out
	./tests.out

electionparadox: electionparadox.o libelectionparadox.o
	$(CC) $(LDFLAGS) -o electionparadox electionparadox.o libelectionparadox.o $(LDLIBS)

electionparadox.o: electionparadox.c libelectionparadox.h
	$(CC) $(CFLAGS) -c electionparadox.c $(LDLIBS)

libelectionparadox.o: libelectionparadox.c libelectionparadox.h
	$(CC) $(CFLAGS) -c libelectionparadox.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf electionparadox *.o *.out

tests.out: test_electionparadox.c libelectionparadox.c libelectionparadox.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_electionparadox.c libelectionparadox.c -o tests.out $(LDLIBS)
