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

all: test timeloop

.PHONY:
test: tests.out
	./tests.out

timeloop: timeloop.o libtimeloop.o 
	$(CC) $(LDFLAGS) -o timeloop timeloop.o libtimeloop.o $(LDLIBS)

timeloop.o: timeloop.c libtimeloop.h
	$(CC) $(CFLAGS) -c timeloop.c $(LDLIBS)

libtimeloop.o: libtimeloop.c libtimeloop.h
	$(CC) $(CFLAGS) -c libtimeloop.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf *.o *.out timeloop

tests.out: test_timeloop.c libtimeloop.c libtimeloop.h
	@echo Compiling $@
	$(CC) $(CFLAGS) test-framework/unity.c test_timeloop.c libtimeloop.c -o tests.out $(LDLIBS)
