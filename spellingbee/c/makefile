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

all: test spellingbee

.PHONY:
test: tests.out
	./tests.out

spellingbee: spellingbee.o libspellingbee.o
	$(CC) $(LDFLAGS) -o spellingbee spellingbee.o libspellingbee.o $(LDLIBS)

spellingbee.o: spellingbee.c libspellingbee.h
	$(CC) $(CFLAGS) -c spellingbee.c $(LDLIBS)

libspellingbee.o: libspellingbee.c libspellingbee.h
	$(CC) $(CFLAGS) -c libspellingbee.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf spellingbee *.o *.out

tests.out: test_spellingbee.c libspellingbee.c libspellingbee.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_spellingbee.c libspellingbee.c -o tests.out $(LDLIBS)
