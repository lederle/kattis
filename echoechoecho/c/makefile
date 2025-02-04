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

all: test echoechoecho

.PHONY:
test: tests.out
	./tests.out

echoechoecho: echoechoecho.o libechoechoecho.o
	$(CC) $(LDFLAGS) -o echoechoecho echoechoecho.o libechoechoecho.o $(LDLIBS)

echoechoecho.o: echoechoecho.c libechoechoecho.h
	$(CC) $(CFLAGS) -c echoechoecho.c $(LDLIBS)

libechoechoecho.o: libechoechoecho.c libechoechoecho.h
	$(CC) $(CFLAGS) -c libechoechoecho.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf echoechoecho *.o *.out

tests.out: test_echoechoecho.c libechoechoecho.c libechoechoecho.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_echoechoecho.c libechoechoecho.c -o tests.out $(LDLIBS)
