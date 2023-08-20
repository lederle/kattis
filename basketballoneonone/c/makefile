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

all: test basketballoneonone

.PHONY:
test: tests.out
	./tests.out

basketballoneonone: basketballoneonone.o libbasketballoneonone.o
	$(CC) $(LDFLAGS) -o basketballoneonone basketballoneonone.o libbasketballoneonone.o $(LDLIBS)

basketballoneonone.o: basketballoneonone.c libbasketballoneonone.h
	$(CC) $(CFLAGS) -c basketballoneonone.c $(LDLIBS)

libbasketballoneonone.o: libbasketballoneonone.c libbasketballoneonone.h
	$(CC) $(CFLAGS) -c libbasketballoneonone.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf basketballoneonone *.o *.out

tests.out: test_basketballoneonone.c libbasketballoneonone.c libbasketballoneonone.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_basketballoneonone.c libbasketballoneonone.c -o tests.out $(LDLIBS)
