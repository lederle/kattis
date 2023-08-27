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

all: test zanzibar

.PHONY:
test: tests.out
	./tests.out

zanzibar: zanzibar.o libzanzibar.o
	$(CC) $(LDFLAGS) -o zanzibar zanzibar.o libzanzibar.o $(LDLIBS)

zanzibar.o: zanzibar.c libzanzibar.h
	$(CC) $(CFLAGS) -c zanzibar.c $(LDLIBS)

libzanzibar.o: libzanzibar.c libzanzibar.h
	$(CC) $(CFLAGS) -c libzanzibar.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf zanzibar *.o *.out

tests.out: test_zanzibar.c libzanzibar.c libzanzibar.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_zanzibar.c libzanzibar.c -o tests.out $(LDLIBS)
