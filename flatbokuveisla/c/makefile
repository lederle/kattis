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

all: test flatbokuveisla

.PHONY:
test: tests.out
	./tests.out

flatbokuveisla: flatbokuveisla.o libflatbokuveisla.o
	$(CC) $(LDFLAGS) -o flatbokuveisla flatbokuveisla.o libflatbokuveisla.o $(LDLIBS)

flatbokuveisla.o: flatbokuveisla.c libflatbokuveisla.h
	$(CC) $(CFLAGS) -c flatbokuveisla.c $(LDLIBS)

libflatbokuveisla.o: libflatbokuveisla.c libflatbokuveisla.h
	$(CC) $(CFLAGS) -c libflatbokuveisla.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf flatbokuveisla *.o *.out

tests.out: test_flatbokuveisla.c libflatbokuveisla.c libflatbokuveisla.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_flatbokuveisla.c libflatbokuveisla.c -o tests.out $(LDLIBS)
