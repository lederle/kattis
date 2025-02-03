#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libdragafra.h"

int main(void) {
  int input1, input2;
  assert(scanf("%d\n%d", &input1, &input2));
  printf("%d\n", dragafra(input1, input2));
  return EXIT_SUCCESS;
}
