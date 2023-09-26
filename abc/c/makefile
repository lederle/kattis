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

all: test abc

.PHONY:
test: tests.out
	./tests.out

abc: abc.o libabc.o
	$(CC) $(LDFLAGS) -o abc abc.o libabc.o $(LDLIBS)

abc.o: abc.c libabc.h
	$(CC) $(CFLAGS) -c abc.c $(LDLIBS)

libabc.o: libabc.c libabc.h
	$(CC) $(CFLAGS) -c libabc.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf abc *.o *.out

tests.out: test_abc.c libabc.c libabc.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_abc.c libabc.c -o tests.out $(LDLIBS)
