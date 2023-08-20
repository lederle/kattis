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

all: test espresso

.PHONY:
test: tests.out
	./tests.out

espresso: espresso.o libespresso.o
	$(CC) $(LDFLAGS) -o espresso espresso.o libespresso.o $(LDLIBS)

espresso.o: espresso.c libespresso.h
	$(CC) $(CFLAGS) -c espresso.c $(LDLIBS)

libespresso.o: libespresso.c libespresso.h
	$(CC) $(CFLAGS) -c libespresso.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf espresso *.o *.out

tests.out: test_espresso.c libespresso.c libespresso.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_espresso.c libespresso.c -o tests.out $(LDLIBS)
