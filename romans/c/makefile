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
CFLAGS += -Werror
CFLAGS += -Wmissing-declarations

all: test romans

.PHONY:
test: tests.out
	./tests.out

romans: romans.o libromans.o 
	$(CC) $(LDFLAGS) -o romans romans.o libromans.o $(LDLIBS)

romans.o: romans.c libromans.h
	$(CC) $(CFLAGS) -c romans.c $(LDLIBS)

libromans.o: libromans.c libromans.h
	$(CC) $(CFLAGS) -c libromans.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf *.o *.out romans

tests.out: test_romans.c libromans.c libromans.h
	@echo Compiling $@
	$(CC) $(CFLAGS) test-framework/unity.c test_romans.c libromans.c -o tests.out $(LDLIBS)
