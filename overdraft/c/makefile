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

all: test overdraft

.PHONY:
test: tests.out
	./tests.out

overdraft: overdraft.o liboverdraft.o
	$(CC) $(LDFLAGS) -o overdraft overdraft.o liboverdraft.o $(LDLIBS)

overdraft.o: overdraft.c liboverdraft.h
	$(CC) $(CFLAGS) -c overdraft.c $(LDLIBS)

liboverdraft.o: liboverdraft.c liboverdraft.h
	$(CC) $(CFLAGS) -c liboverdraft.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf overdraft *.o *.out

tests.out: test_overdraft.c liboverdraft.c liboverdraft.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_overdraft.c liboverdraft.c -o tests.out $(LDLIBS)
