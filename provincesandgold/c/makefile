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

all: test provincesandgold

.PHONY:
test: tests.out
	./tests.out

provincesandgold: provincesandgold.o libprovincesandgold.o
	$(CC) $(LDFLAGS) -o provincesandgold provincesandgold.o libprovincesandgold.o $(LDLIBS)

provincesandgold.o: provincesandgold.c libprovincesandgold.h
	$(CC) $(CFLAGS) -c provincesandgold.c $(LDLIBS)

libprovincesandgold.o: libprovincesandgold.c libprovincesandgold.h
	$(CC) $(CFLAGS) -c libprovincesandgold.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf provincesandgold *.o *.out

tests.out: test_provincesandgold.c libprovincesandgold.c libprovincesandgold.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_provincesandgold.c libprovincesandgold.c -o tests.out $(LDLIBS)
