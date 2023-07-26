#include <stdio.h>
#include <stdlib.h>
#include "libtimeloop.h"

int main(void) {
  int repetitions;
  if (scanf("%d", &repetitions) != 1)
    return EXIT_FAILURE;
  char dest[20 * repetitions];
  printf("%s", timeloop(dest, repetitions));
  return EXIT_SUCCESS;
}
