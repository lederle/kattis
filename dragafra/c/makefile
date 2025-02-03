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

all: test dragafra

.PHONY:
test: tests.out
	./tests.out

dragafra: dragafra.o libdragafra.o
	$(CC) $(LDFLAGS) -o dragafra dragafra.o libdragafra.o $(LDLIBS)

dragafra.o: dragafra.c libdragafra.h
	$(CC) $(CFLAGS) -c dragafra.c $(LDLIBS)

libdragafra.o: libdragafra.c libdragafra.h
	$(CC) $(CFLAGS) -c libdragafra.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf dragafra *.o *.out

tests.out: test_dragafra.c libdragafra.c libdragafra.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_dragafra.c libdragafra.c -o tests.out $(LDLIBS)
