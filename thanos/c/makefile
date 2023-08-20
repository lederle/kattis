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

all: test thanos

.PHONY:
test: tests.out
	./tests.out

thanos: thanos.o libthanos.o
	$(CC) $(LDFLAGS) -o thanos thanos.o libthanos.o $(LDLIBS)

thanos.o: thanos.c libthanos.h
	$(CC) $(CFLAGS) -c thanos.c $(LDLIBS)

libthanos.o: libthanos.c libthanos.h
	$(CC) $(CFLAGS) -c libthanos.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf thanos *.o *.out

tests.out: test_thanos.c libthanos.c libthanos.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_thanos.c libthanos.c -o tests.out $(LDLIBS)
