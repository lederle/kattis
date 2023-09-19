#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libfilip.h"

int main(void) {
  int A, B, revA, revB;
  assert(scanf("%d %d", &A, &B) == 2);
  filip(A, &revA);
  filip(B, &revB);
  printf("%d\n", revA > revB ? revA : revB);
  return EXIT_SUCCESS;
}
