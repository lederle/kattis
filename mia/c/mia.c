#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libmia.h"

int main(void) {
  int s0, s1, r0, r1;
  while (scanf("%d %d %d %d", &s0, &s1, &r0, &r1) == 4) {
    if (s0 == 0) return EXIT_SUCCESS;

    int res = mia(s0, s1, r0, r1);
    if (res)
      printf("Player %d wins.\n", res);
    else
      printf("Tie.\n");
  }
  return EXIT_SUCCESS;
}
