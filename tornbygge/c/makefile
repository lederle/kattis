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

all: test tornbygge

.PHONY:
test: tests.out
	./tests.out

tornbygge: tornbygge.o libtornbygge.o
	$(CC) $(LDFLAGS) -o tornbygge tornbygge.o libtornbygge.o $(LDLIBS)

tornbygge.o: tornbygge.c libtornbygge.h
	$(CC) $(CFLAGS) -c tornbygge.c $(LDLIBS)

libtornbygge.o: libtornbygge.c libtornbygge.h
	$(CC) $(CFLAGS) -c libtornbygge.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf tornbygge *.o *.out

tests.out: test_tornbygge.c libtornbygge.c libtornbygge.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_tornbygge.c libtornbygge.c -o tests.out $(LDLIBS)
