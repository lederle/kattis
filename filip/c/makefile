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

all: test filip

.PHONY:
test: tests.out
	./tests.out

filip: filip.o libfilip.o
	$(CC) $(LDFLAGS) -o filip filip.o libfilip.o $(LDLIBS)

filip.o: filip.c libfilip.h
	$(CC) $(CFLAGS) -c filip.c $(LDLIBS)

libfilip.o: libfilip.c libfilip.h
	$(CC) $(CFLAGS) -c libfilip.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf filip *.o *.out

tests.out: test_filip.c libfilip.c libfilip.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_filip.c libfilip.c -o tests.out $(LDLIBS)
