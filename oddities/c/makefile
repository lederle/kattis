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

all: test oddities

.PHONY:
test: tests.out
	./tests.out

oddities: oddities.o liboddities.o
	$(CC) $(LDFLAGS) -o oddities oddities.o liboddities.o $(LDLIBS)

oddities.o: oddities.c liboddities.h
	$(CC) $(CFLAGS) -c oddities.c $(LDLIBS)

liboddities.o: liboddities.c liboddities.h
	$(CC) $(CFLAGS) -c liboddities.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf oddities *.o *.out

tests.out: test_oddities.c liboddities.c liboddities.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_oddities.c liboddities.c -o tests.out $(LDLIBS)
