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

all: test tarifa

.PHONY:
test: tests.out
	./tests.out

tarifa: tarifa.o libtarifa.o
	$(CC) $(LDFLAGS) -o tarifa tarifa.o libtarifa.o $(LDLIBS)

tarifa.o: tarifa.c libtarifa.h
	$(CC) $(CFLAGS) -c tarifa.c $(LDLIBS)

libtarifa.o: libtarifa.c libtarifa.h
	$(CC) $(CFLAGS) -c libtarifa.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf tarifa *.o *.out

tests.out: test_tarifa.c libtarifa.c libtarifa.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_tarifa.c libtarifa.c -o tests.out $(LDLIBS)
