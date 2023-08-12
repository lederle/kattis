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

all: test quadrant

.PHONY:
test: tests.out
	./tests.out

quadrant: quadrant.o libquadrant.o
	$(CC) $(LDFLAGS) -o quadrant quadrant.o libquadrant.o $(LDLIBS)

quadrant.o: quadrant.c libquadrant.h
	$(CC) $(CFLAGS) -c quadrant.c $(LDLIBS)

libquadrant.o: libquadrant.c libquadrant.h
	$(CC) $(CFLAGS) -c libquadrant.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf quadrant *.o *.out

tests.out: test_quadrant.c libquadrant.c libquadrant.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_quadrant.c libquadrant.c -o tests.out $(LDLIBS)
