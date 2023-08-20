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

all: test brokencalculator

.PHONY:
test: tests.out
	./tests.out

brokencalculator: brokencalculator.o libbrokencalculator.o
	$(CC) $(LDFLAGS) -o brokencalculator brokencalculator.o libbrokencalculator.o $(LDLIBS)

brokencalculator.o: brokencalculator.c libbrokencalculator.h
	$(CC) $(CFLAGS) -c brokencalculator.c $(LDLIBS)

libbrokencalculator.o: libbrokencalculator.c libbrokencalculator.h
	$(CC) $(CFLAGS) -c libbrokencalculator.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf brokencalculator *.o *.out

tests.out: test_brokencalculator.c libbrokencalculator.c libbrokencalculator.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_brokencalculator.c libbrokencalculator.c -o tests.out $(LDLIBS)
