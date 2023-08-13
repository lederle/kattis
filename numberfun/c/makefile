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

all: test numberfun

.PHONY:
test: tests.out
	./tests.out

numberfun: numberfun.o libnumberfun.o
	$(CC) $(LDFLAGS) -o numberfun numberfun.o libnumberfun.o $(LDLIBS)

numberfun.o: numberfun.c libnumberfun.h
	$(CC) $(CFLAGS) -c numberfun.c $(LDLIBS)

libnumberfun.o: libnumberfun.c libnumberfun.h
	$(CC) $(CFLAGS) -c libnumberfun.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf numberfun *.o *.out

tests.out: test_numberfun.c libnumberfun.c libnumberfun.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_numberfun.c libnumberfun.c -o tests.out $(LDLIBS)
