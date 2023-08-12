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

all: test nastyhacks

.PHONY:
test: tests.out
	./tests.out

nastyhacks: nastyhacks.o libnastyhacks.o
	$(CC) $(LDFLAGS) -o nastyhacks nastyhacks.o libnastyhacks.o $(LDLIBS)

nastyhacks.o: nastyhacks.c libnastyhacks.h
	$(CC) $(CFLAGS) -c nastyhacks.c $(LDLIBS)

libnastyhacks.o: libnastyhacks.c libnastyhacks.h
	$(CC) $(CFLAGS) -c libnastyhacks.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf nastyhacks *.o *.out

tests.out: test_nastyhacks.c libnastyhacks.c libnastyhacks.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_nastyhacks.c libnastyhacks.c -o tests.out $(LDLIBS)
