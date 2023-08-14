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

all: test earlywinter

.PHONY:
test: tests.out
	./tests.out

earlywinter: earlywinter.o libearlywinter.o
	$(CC) $(LDFLAGS) -o earlywinter earlywinter.o libearlywinter.o $(LDLIBS)

earlywinter.o: earlywinter.c libearlywinter.h
	$(CC) $(CFLAGS) -c earlywinter.c $(LDLIBS)

libearlywinter.o: libearlywinter.c libearlywinter.h
	$(CC) $(CFLAGS) -c libearlywinter.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf earlywinter *.o *.out

tests.out: test_earlywinter.c libearlywinter.c libearlywinter.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_earlywinter.c libearlywinter.c -o tests.out $(LDLIBS)
