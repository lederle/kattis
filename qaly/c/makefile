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

all: test qaly

.PHONY:
test: tests.out
	./tests.out

qaly: qaly.o libqaly.o
	$(CC) $(LDFLAGS) -o qaly qaly.o libqaly.o $(LDLIBS)

qaly.o: qaly.c libqaly.h
	$(CC) $(CFLAGS) -c qaly.c $(LDLIBS)

libqaly.o: libqaly.c libqaly.h
	$(CC) $(CFLAGS) -c libqaly.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf qaly *.o *.out

tests.out: test_qaly.c libqaly.c libqaly.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_qaly.c libqaly.c -o tests.out $(LDLIBS)
