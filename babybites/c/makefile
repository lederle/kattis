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

all: test babybites

.PHONY:
test: tests.out
	./tests.out

babybites: babybites.o libbabybites.o
	$(CC) $(LDFLAGS) -o babybites babybites.o libbabybites.o $(LDLIBS)

babybites.o: babybites.c libbabybites.h
	$(CC) $(CFLAGS) -c babybites.c $(LDLIBS)

libbabybites.o: libbabybites.c libbabybites.h
	$(CC) $(CFLAGS) -c libbabybites.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf babybites *.o *.out

tests.out: test_babybites.c libbabybites.c libbabybites.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_babybites.c libbabybites.c -o tests.out $(LDLIBS)
