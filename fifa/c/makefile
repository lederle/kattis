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

all: test fifa

.PHONY:
test: tests.out
	./tests.out

fifa: fifa.o libfifa.o
	$(CC) $(LDFLAGS) -o fifa fifa.o libfifa.o $(LDLIBS)

fifa.o: fifa.c libfifa.h
	$(CC) $(CFLAGS) -c fifa.c $(LDLIBS)

libfifa.o: libfifa.c libfifa.h
	$(CC) $(CFLAGS) -c libfifa.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf fifa *.o *.out

tests.out: test_fifa.c libfifa.c libfifa.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_fifa.c libfifa.c -o tests.out $(LDLIBS)
