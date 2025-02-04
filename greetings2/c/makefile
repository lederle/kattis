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

all: test greetings2

.PHONY:
test: tests.out
	./tests.out

greetings2: greetings2.o libgreetings2.o
	$(CC) $(LDFLAGS) -o greetings2 greetings2.o libgreetings2.o $(LDLIBS)

greetings2.o: greetings2.c libgreetings2.h
	$(CC) $(CFLAGS) -c greetings2.c $(LDLIBS)

libgreetings2.o: libgreetings2.c libgreetings2.h
	$(CC) $(CFLAGS) -c libgreetings2.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf greetings2 *.o *.out

tests.out: test_greetings2.c libgreetings2.c libgreetings2.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_greetings2.c libgreetings2.c -o tests.out $(LDLIBS)
