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

all: test fimmstudagstilbod

.PHONY:
test: tests.out
	./tests.out

fimmstudagstilbod: fimmstudagstilbod.o libfimmstudagstilbod.o
	$(CC) $(LDFLAGS) -o fimmstudagstilbod fimmstudagstilbod.o libfimmstudagstilbod.o $(LDLIBS)

fimmstudagstilbod.o: fimmstudagstilbod.c libfimmstudagstilbod.h
	$(CC) $(CFLAGS) -c fimmstudagstilbod.c $(LDLIBS)

libfimmstudagstilbod.o: libfimmstudagstilbod.c libfimmstudagstilbod.h
	$(CC) $(CFLAGS) -c libfimmstudagstilbod.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf fimmstudagstilbod *.o *.out

tests.out: test_fimmstudagstilbod.c libfimmstudagstilbod.c libfimmstudagstilbod.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_fimmstudagstilbod.c libfimmstudagstilbod.c -o tests.out $(LDLIBS)
