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

all: test statistics

.PHONY:
test: tests.out
	./tests.out

statistics: statistics.o libstatistics.o
	$(CC) $(LDFLAGS) -o statistics statistics.o libstatistics.o $(LDLIBS)

statistics.o: statistics.c libstatistics.h
	$(CC) $(CFLAGS) -c statistics.c $(LDLIBS)

libstatistics.o: libstatistics.c libstatistics.h
	$(CC) $(CFLAGS) -c libstatistics.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf statistics *.o *.out

tests.out: test_statistics.c libstatistics.c libstatistics.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_statistics.c libstatistics.c -o tests.out $(LDLIBS)
