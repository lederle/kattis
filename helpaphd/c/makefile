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

all: test helpaphd

.PHONY:
test: tests.out
	./tests.out

helpaphd: helpaphd.o libhelpaphd.o
	$(CC) $(LDFLAGS) -o helpaphd helpaphd.o libhelpaphd.o $(LDLIBS)

helpaphd.o: helpaphd.c libhelpaphd.h
	$(CC) $(CFLAGS) -c helpaphd.c $(LDLIBS)

libhelpaphd.o: libhelpaphd.c libhelpaphd.h
	$(CC) $(CFLAGS) -c libhelpaphd.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf helpaphd *.o *.out

tests.out: test_helpaphd.c libhelpaphd.c libhelpaphd.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_helpaphd.c libhelpaphd.c -o tests.out $(LDLIBS)
