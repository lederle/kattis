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

all: test leftbeehind

.PHONY:
test: tests.out
	./tests.out

leftbeehind: leftbeehind.o libleftbeehind.o
	$(CC) $(LDFLAGS) -o leftbeehind leftbeehind.o libleftbeehind.o $(LDLIBS)

leftbeehind.o: leftbeehind.c libleftbeehind.h
	$(CC) $(CFLAGS) -c leftbeehind.c $(LDLIBS)

libleftbeehind.o: libleftbeehind.c libleftbeehind.h
	$(CC) $(CFLAGS) -c libleftbeehind.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf leftbeehind *.o *.out

tests.out: test_leftbeehind.c libleftbeehind.c libleftbeehind.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_leftbeehind.c libleftbeehind.c -o tests.out $(LDLIBS)
