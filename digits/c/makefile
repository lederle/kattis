.POSIX:
.SUFFIXES:

CC = gcc
LDLIBS = -lm

CFLAGS = -std=gnu11
CFLAGS += -g
# CFLAGS += -Og
CFLAGS += -DUNITY_SUPPORT_64 -DUNITY_OUTPUT_COLOR

# This is the optimization used on kattis
# CFLAGS += -O2

# These are further exercism flags
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -pedantic
# CFLAGS += -Werror
CFLAGS += -Wmissing-declarations

all: test digits

.PHONY:
test: tests.out
	./tests.out

digits: digits.o libdigits.o
	$(CC) $(LDFLAGS) -o digits digits.o libdigits.o $(LDLIBS)

digits.o: digits.c libdigits.h
	$(CC) $(CFLAGS) -c digits.c $(LDLIBS)

libdigits.o: libdigits.c libdigits.h
	$(CC) $(CFLAGS) -c libdigits.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf digits *.o *.out

tests.out: test_digits.c libdigits.c libdigits.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_digits.c libdigits.c -o tests.out $(LDLIBS)
