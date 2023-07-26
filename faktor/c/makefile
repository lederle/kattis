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

all: test faktor

.PHONY:
test: tests.out
	./tests.out

faktor: faktor.o libfaktor.o 
	$(CC) $(LDFLAGS) -o faktor faktor.o libfaktor.o $(LDLIBS)

faktor.o: faktor.c libfaktor.h
	$(CC) $(CFLAGS) -c faktor.c

libfaktor.o: libfaktor.c libfaktor.h
	$(CC) $(CFLAGS) -c libfaktor.c

.PHONY: clean
clean:
	rm -rf *.o *.out faktor

tests.out: test_faktor.c libfaktor.c libfaktor.h
	@echo Compiling $@
	$(CC) $(CFLAGS) test-framework/unity.c test_faktor.c libfaktor.c -o tests.out $(LIBS)
