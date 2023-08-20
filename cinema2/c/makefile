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

all: test cinema2

.PHONY:
test: tests.out
	./tests.out

cinema2: cinema2.o libcinema2.o
	$(CC) $(LDFLAGS) -o cinema2 cinema2.o libcinema2.o $(LDLIBS)

cinema2.o: cinema2.c libcinema2.h
	$(CC) $(CFLAGS) -c cinema2.c $(LDLIBS)

libcinema2.o: libcinema2.c libcinema2.h
	$(CC) $(CFLAGS) -c libcinema2.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf cinema2 *.o *.out

tests.out: test_cinema2.c libcinema2.c libcinema2.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_cinema2.c libcinema2.c -o tests.out $(LDLIBS)
