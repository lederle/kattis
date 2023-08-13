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

all: test oddgnome

.PHONY:
test: tests.out
	./tests.out

oddgnome: oddgnome.o liboddgnome.o
	$(CC) $(LDFLAGS) -o oddgnome oddgnome.o liboddgnome.o $(LDLIBS)

oddgnome.o: oddgnome.c liboddgnome.h
	$(CC) $(CFLAGS) -c oddgnome.c $(LDLIBS)

liboddgnome.o: liboddgnome.c liboddgnome.h
	$(CC) $(CFLAGS) -c liboddgnome.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf oddgnome *.o *.out

tests.out: test_oddgnome.c liboddgnome.c liboddgnome.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_oddgnome.c liboddgnome.c -o tests.out $(LDLIBS)
