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

all: test onechicken

.PHONY:
test: tests.out
	./tests.out

onechicken: onechicken.o libonechicken.o
	$(CC) $(LDFLAGS) -o onechicken onechicken.o libonechicken.o $(LDLIBS)

onechicken.o: onechicken.c libonechicken.h
	$(CC) $(CFLAGS) -c onechicken.c $(LDLIBS)

libonechicken.o: libonechicken.c libonechicken.h
	$(CC) $(CFLAGS) -c libonechicken.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf onechicken *.o *.out

tests.out: test_onechicken.c libonechicken.c libonechicken.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_onechicken.c libonechicken.c -o tests.out $(LDLIBS)
