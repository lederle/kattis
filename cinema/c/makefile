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

all: test cinema

.PHONY:
test: tests.out
	./tests.out

cinema: cinema.o libcinema.o
	$(CC) $(LDFLAGS) -o cinema cinema.o libcinema.o $(LDLIBS)

cinema.o: cinema.c libcinema.h
	$(CC) $(CFLAGS) -c cinema.c $(LDLIBS)

libcinema.o: libcinema.c libcinema.h
	$(CC) $(CFLAGS) -c libcinema.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf cinema *.o *.out

tests.out: test_cinema.c libcinema.c libcinema.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_cinema.c libcinema.c -o tests.out $(LDLIBS)
