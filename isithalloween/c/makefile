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

all: test isithalloween

.PHONY:
test: tests.out
	./tests.out

isithalloween: isithalloween.o libisithalloween.o
	$(CC) $(LDFLAGS) -o isithalloween isithalloween.o libisithalloween.o $(LDLIBS)

isithalloween.o: isithalloween.c libisithalloween.h
	$(CC) $(CFLAGS) -c isithalloween.c $(LDLIBS)

libisithalloween.o: libisithalloween.c libisithalloween.h
	$(CC) $(CFLAGS) -c libisithalloween.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf isithalloween *.o *.out

tests.out: test_isithalloween.c libisithalloween.c libisithalloween.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_isithalloween.c libisithalloween.c -o tests.out $(LDLIBS)
