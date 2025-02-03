#include "libdigitswap.h"

char *digitswap(char input[]) {
  char tmp = input[0];
  input[0] = input[1];
  input[1] = tmp;
  return input;
}
