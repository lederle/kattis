#include <stdio.h>
#include <stdlib.h>
#include "libdifferent.h"

int main(void) {
  unsigned long long A, B;
  while (scanf("%llu %llu", &A, &B) != EOF)
    printf("%llu\n", different(A, B));

  return EXIT_SUCCESS;
}
