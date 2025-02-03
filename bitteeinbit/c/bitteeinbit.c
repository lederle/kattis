#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libbitteeinbit.h"

//

int main(void) {
  char input[MAX_INPUT + 1];
  assert(scanf("%" MAX_INPUT_S "[^\n]", input));
  printf("%c\n", bitteeinbit(input));
  return EXIT_SUCCESS;
}
