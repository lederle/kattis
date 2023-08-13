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

all: test cold

.PHONY:
test: tests.out
	./tests.out

cold: cold.o libcold.o
	$(CC) $(LDFLAGS) -o cold cold.o libcold.o $(LDLIBS)

cold.o: cold.c libcold.h
	$(CC) $(CFLAGS) -c cold.c $(LDLIBS)

libcold.o: libcold.c libcold.h
	$(CC) $(CFLAGS) -c libcold.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf cold *.o *.out

tests.out: test_cold.c libcold.c libcold.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_cold.c libcold.c -o tests.out $(LDLIBS)
