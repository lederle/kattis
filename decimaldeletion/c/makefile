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

all: test decimaldeletion

.PHONY:
test: tests.out
	./tests.out

decimaldeletion: decimaldeletion.o libdecimaldeletion.o
	$(CC) $(LDFLAGS) -o decimaldeletion decimaldeletion.o libdecimaldeletion.o $(LDLIBS)

decimaldeletion.o: decimaldeletion.c libdecimaldeletion.h
	$(CC) $(CFLAGS) -c decimaldeletion.c $(LDLIBS)

libdecimaldeletion.o: libdecimaldeletion.c libdecimaldeletion.h
	$(CC) $(CFLAGS) -c libdecimaldeletion.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf decimaldeletion *.o *.out

tests.out: test_decimaldeletion.c libdecimaldeletion.c libdecimaldeletion.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_decimaldeletion.c libdecimaldeletion.c -o tests.out $(LDLIBS)
