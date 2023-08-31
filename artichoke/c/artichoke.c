#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libartichoke.h"

int main(void) {
  int p, a, b, c, d, n;
  assert(scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) == 6);
  printf("%lf\n", artichoke(p, a, b, c, d, n));
  return EXIT_SUCCESS;
}
