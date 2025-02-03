#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libdigitswap.h"

#define MAX_INPUT 2
#define MAX_INPUT_S "2"

int main(void) {
  char input[MAX_INPUT + 1];
  assert(scanf("%" MAX_INPUT_S "[^\n]", input));
  printf("%s\n", digitswap(input));
  return EXIT_SUCCESS;
}
