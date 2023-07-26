#include <string.h>
#include <stdio.h>

#include "libtimeloop.h"

char *timeloop(char *result, int count) {
  char *here = result;
  for (int i = 1; i <= count; i++) {
    sprintf(here, "%d", i);
    int digit_size = i < 10 ? 1 : i < 100 ? 2 : 3;
    here += digit_size;
    const char *boiler = " Abracadabra\n";
    sprintf(here, "%s", boiler);
    here += strlen(boiler);
  }
  return result;
}
