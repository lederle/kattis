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

all: test eligibility

.PHONY:
test: tests.out
	./tests.out

eligibility: eligibility.o libeligibility.o
	$(CC) $(LDFLAGS) -o eligibility eligibility.o libeligibility.o $(LDLIBS)

eligibility.o: eligibility.c libeligibility.h
	$(CC) $(CFLAGS) -c eligibility.c $(LDLIBS)

libeligibility.o: libeligibility.c libeligibility.h
	$(CC) $(CFLAGS) -c libeligibility.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf eligibility *.o *.out

tests.out: test_eligibility.c libeligibility.c libeligibility.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_eligibility.c libeligibility.c -o tests.out $(LDLIBS)
