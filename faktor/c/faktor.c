#include <stdio.h>
#include <stdlib.h>
#include "libfaktor.h"

int main(void) {
  int A, I;
  if (scanf("%d %d", &A, &I) != 2)
    return EXIT_FAILURE;
  printf("%d\n", faktor(A, I));
  return EXIT_SUCCESS;
}
