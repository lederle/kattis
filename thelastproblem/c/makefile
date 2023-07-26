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

all: test thelastproblem

.PHONY:
test: tests.out
	./tests.out

thelastproblem: thelastproblem.o libthelastproblem.o 
	$(CC) $(LDFLAGS) -o thelastproblem thelastproblem.o libthelastproblem.o $(LDLIBS)

thelastproblem.o: thelastproblem.c libthelastproblem.h
	$(CC) $(CFLAGS) -c thelastproblem.c

libthelastproblem.o: libthelastproblem.c libthelastproblem.h
	$(CC) $(CFLAGS) -c libthelastproblem.c

.PHONY: clean
clean:
	rm -rf *.o *.out thelastproblem

tests.out: test_thelastproblem.c libthelastproblem.c libthelastproblem.h
	@echo Compiling $@
	$(CC) $(CFLAGS) test-framework/unity.c test_thelastproblem.c libthelastproblem.c -o tests.out $(LIBS)
