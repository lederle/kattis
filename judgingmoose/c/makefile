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

all: test judgingmoose

.PHONY:
test: tests.out
	./tests.out

judgingmoose: judgingmoose.o libjudgingmoose.o
	$(CC) $(LDFLAGS) -o judgingmoose judgingmoose.o libjudgingmoose.o $(LDLIBS)

judgingmoose.o: judgingmoose.c libjudgingmoose.h
	$(CC) $(CFLAGS) -c judgingmoose.c $(LDLIBS)

libjudgingmoose.o: libjudgingmoose.c libjudgingmoose.h
	$(CC) $(CFLAGS) -c libjudgingmoose.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf judgingmoose *.o *.out

tests.out: test_judgingmoose.c libjudgingmoose.c libjudgingmoose.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_judgingmoose.c libjudgingmoose.c -o tests.out $(LDLIBS)
