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

all: test licensetolaunch

.PHONY:
test: tests.out
	./tests.out

licensetolaunch: licensetolaunch.o liblicensetolaunch.o
	$(CC) $(LDFLAGS) -o licensetolaunch licensetolaunch.o liblicensetolaunch.o $(LDLIBS)

licensetolaunch.o: licensetolaunch.c liblicensetolaunch.h
	$(CC) $(CFLAGS) -c licensetolaunch.c $(LDLIBS)

liblicensetolaunch.o: liblicensetolaunch.c liblicensetolaunch.h
	$(CC) $(CFLAGS) -c liblicensetolaunch.c $(LDLIBS)

.PHONY: clean
clean:
	rm -rf licensetolaunch *.o *.out

tests.out: test_licensetolaunch.c liblicensetolaunch.c liblicensetolaunch.h
	${CC} $(CFLAGS) ../../lib/test-framework/unity.c test_licensetolaunch.c liblicensetolaunch.c -o tests.out $(LDLIBS)
