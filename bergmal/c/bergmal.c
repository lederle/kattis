#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libbergmal.h"

int main(void) {
  char input[MAX_LINE + 1];
  assert(scanf("%" MAX_LINE_S "[^\n]", input));
  printf("%s\n", bergmal(input));
  return EXIT_SUCCESS;
}
