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

all: test different

.PHONY:
test: tests.out
	./tests.out

different: different.o libdifferent.o 
	$(CC) $(LDFLAGS) -o different different.o libdifferent.o $(LDLIBS)

different.o: different.c libdifferent.h
	$(CC) $(CFLAGS) -c different.c $(LDLIBS)

libdifferent.o: libdifferent.c libdifferent.h
	$(CC) $(CFLAGS) -c libdifferent.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf *.o *.out different

tests.out: test_different.c libdifferent.c libdifferent.h
	@echo Compiling $@
	$(CC) $(CFLAGS) test-framework/unity.c test_different.c libdifferent.c -o tests.out $(LDLIBS)
