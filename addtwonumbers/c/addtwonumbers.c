#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libaddtwonumbers.h"

int main(void) {
  int A, B;
  assert(scanf("%d %d", &A, &B) == 2);
  printf("%d", addtwonumbers(A, B));
  return EXIT_SUCCESS;
}
