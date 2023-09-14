#include <stdio.h>
#include <stdlib.h>

#include "libdigits.h"

int main(void) {
  char A[1000001];
  while (scanf("%s", A) == 1) {
    if (A[0] == 'E') break;

    printf("%d\n", digits(A));
  }
  return EXIT_SUCCESS;
}
