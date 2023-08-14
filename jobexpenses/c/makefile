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

all: test jobexpenses

.PHONY:
test: tests.out
	./tests.out

jobexpenses: jobexpenses.o libjobexpenses.o
	$(CC) $(LDFLAGS) -o jobexpenses jobexpenses.o libjobexpenses.o $(LDLIBS)

jobexpenses.o: jobexpenses.c libjobexpenses.h
	$(CC) $(CFLAGS) -c jobexpenses.c $(LDLIBS)

libjobexpenses.o: libjobexpenses.c libjobexpenses.h
	$(CC) $(CFLAGS) -c libjobexpenses.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf jobexpenses *.o *.out

tests.out: test_jobexpenses.c libjobexpenses.c libjobexpenses.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_jobexpenses.c libjobexpenses.c -o tests.out $(LDLIBS)
