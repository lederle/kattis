#include <stdio.h>
#include <stdlib.h>
#include "libr2.h"

int main(void) {
  int R1, S;
  if (scanf("%d %d", &R1, &S) != 2) 
    return EXIT_FAILURE;
  printf("%d\n", r2(R1, S));

  return EXIT_SUCCESS;
}
