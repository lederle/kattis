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

all: test moscowdream

.PHONY:
test: tests.out
	./tests.out

moscowdream: moscowdream.o libmoscowdream.o
	$(CC) $(LDFLAGS) -o moscowdream moscowdream.o libmoscowdream.o $(LDLIBS)

moscowdream.o: moscowdream.c libmoscowdream.h
	$(CC) $(CFLAGS) -c moscowdream.c $(LDLIBS)

libmoscowdream.o: libmoscowdream.c libmoscowdream.h
	$(CC) $(CFLAGS) -c libmoscowdream.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf moscowdream *.o *.out

tests.out: test_moscowdream.c libmoscowdream.c libmoscowdream.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_moscowdream.c libmoscowdream.c -o tests.out $(LDLIBS)
