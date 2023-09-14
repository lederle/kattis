#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libdigits.h"

int main(void) {
  char A[1000001];
  while (scanf("%s", A) == 1) {
    if (A[0] == 'E') return EXIT_SUCCESS;

    int index = 2, next;
    int curr = strlen(A);
    while (1) {
      next = 1.0 + floor(log10(curr));
      if (curr == next) break;
      index++;
      curr = next;
    }

    printf("%d\n", index);
  }
  return EXIT_SUCCESS;
}
