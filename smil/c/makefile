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

all: test smil

.PHONY:
test: tests.out
	./tests.out

smil: smil.o libsmil.o
	$(CC) $(LDFLAGS) -o smil smil.o libsmil.o $(LDLIBS)

smil.o: smil.c libsmil.h
	$(CC) $(CFLAGS) -c smil.c $(LDLIBS)

libsmil.o: libsmil.c libsmil.h
	$(CC) $(CFLAGS) -c libsmil.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf smil *.o *.out

tests.out: test_smil.c libsmil.c libsmil.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_smil.c libsmil.c -o tests.out $(LDLIBS)
