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

all: test temperature

.PHONY:
test: tests.out
	./tests.out

temperature: temperature.o libtemperature.o
	$(CC) $(LDFLAGS) -o temperature temperature.o libtemperature.o $(LDLIBS)

temperature.o: temperature.c libtemperature.h
	$(CC) $(CFLAGS) -c temperature.c $(LDLIBS)

libtemperature.o: libtemperature.c libtemperature.h
	$(CC) $(CFLAGS) -c libtemperature.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf temperature *.o *.out

tests.out: test_temperature.c libtemperature.c libtemperature.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_temperature.c libtemperature.c -o tests.out $(LDLIBS)
