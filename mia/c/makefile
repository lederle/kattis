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

all: test mia

.PHONY:
test: tests.out
	./tests.out

mia: mia.o libmia.o
	$(CC) $(LDFLAGS) -o mia mia.o libmia.o $(LDLIBS)

mia.o: mia.c libmia.h
	$(CC) $(CFLAGS) -c mia.c $(LDLIBS)

libmia.o: libmia.c libmia.h
	$(CC) $(CFLAGS) -c libmia.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf mia *.o *.out

tests.out: test_mia.c libmia.c libmia.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_mia.c libmia.c -o tests.out $(LDLIBS)
