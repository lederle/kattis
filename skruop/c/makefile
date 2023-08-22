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

all: test skruop

.PHONY:
test: tests.out
	./tests.out

skruop: skruop.o libskruop.o
	$(CC) $(LDFLAGS) -o skruop skruop.o libskruop.o $(LDLIBS)

skruop.o: skruop.c libskruop.h
	$(CC) $(CFLAGS) -c skruop.c $(LDLIBS)

libskruop.o: libskruop.c libskruop.h
	$(CC) $(CFLAGS) -c libskruop.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf skruop *.o *.out

tests.out: test_skruop.c libskruop.c libskruop.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_skruop.c libskruop.c -o tests.out $(LDLIBS)
