.POSIX:
.SUFFIXES:

CC = gcc
LDLIBS = -lm

CFLAGS = -std=gnu11
CFLAGS += -g
CFLAGS += -Og
CFLAGS += -DUNITY_SUPPORT_64 -DUNITY_OUTPUT_COLOR -DUNITY_INCLUDE_DOUBLE

# This is the optimization used on kattis
# CFLAGS += -O2

# These are further exercism flags
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -pedantic
# CFLAGS += -Werror
CFLAGS += -Wmissing-declarations

all: test ameriskur

.PHONY:
test: tests.out
	./tests.out

ameriskur: ameriskur.o libameriskur.o
	$(CC) $(LDFLAGS) -o ameriskur ameriskur.o libameriskur.o $(LDLIBS)

ameriskur.o: ameriskur.c libameriskur.h
	$(CC) $(CFLAGS) -c ameriskur.c $(LDLIBS)

libameriskur.o: libameriskur.c libameriskur.h
	$(CC) $(CFLAGS) -c libameriskur.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf ameriskur *.o *.out

tests.out: test_ameriskur.c libameriskur.c libameriskur.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_ameriskur.c libameriskur.c -o tests.out $(LDLIBS)
