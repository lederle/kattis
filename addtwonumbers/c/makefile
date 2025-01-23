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

all: test addtwonumbers

.PHONY:
test: tests.out
	./tests.out

addtwonumbers: addtwonumbers.o libaddtwonumbers.o
	$(CC) $(LDFLAGS) -o addtwonumbers addtwonumbers.o libaddtwonumbers.o $(LDLIBS)

addtwonumbers.o: addtwonumbers.c libaddtwonumbers.h
	$(CC) $(CFLAGS) -c addtwonumbers.c $(LDLIBS)

libaddtwonumbers.o: libaddtwonumbers.c libaddtwonumbers.h
	$(CC) $(CFLAGS) -c libaddtwonumbers.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf addtwonumbers *.o *.out

tests.out: test_addtwonumbers.c libaddtwonumbers.c libaddtwonumbers.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_addtwonumbers.c libaddtwonumbers.c -o tests.out $(LDLIBS)
