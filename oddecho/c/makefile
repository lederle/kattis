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

all: test oddecho

.PHONY:
test: tests.out
	./tests.out

oddecho: oddecho.o liboddecho.o
	$(CC) $(LDFLAGS) -o oddecho oddecho.o liboddecho.o $(LDLIBS)

oddecho.o: oddecho.c liboddecho.h
	$(CC) $(CFLAGS) -c oddecho.c $(LDLIBS)

liboddecho.o: liboddecho.c liboddecho.h
	$(CC) $(CFLAGS) -c liboddecho.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf oddecho *.o *.out

tests.out: test_oddecho.c liboddecho.c liboddecho.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_oddecho.c liboddecho.c -o tests.out $(LDLIBS)
