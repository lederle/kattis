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

all: test bergmal

.PHONY:
test: tests.out
	./tests.out

bergmal: bergmal.o libbergmal.o
	$(CC) $(LDFLAGS) -o bergmal bergmal.o libbergmal.o $(LDLIBS)

bergmal.o: bergmal.c libbergmal.h
	$(CC) $(CFLAGS) -c bergmal.c $(LDLIBS)

libbergmal.o: libbergmal.c libbergmal.h
	$(CC) $(CFLAGS) -c libbergmal.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf bergmal *.o *.out

tests.out: test_bergmal.c libbergmal.c libbergmal.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_bergmal.c libbergmal.c -o tests.out $(LDLIBS)
