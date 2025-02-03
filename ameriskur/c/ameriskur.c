#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libameriskur.h"

//

int main(void) {
  int fields;
  assert(scanf("%d", &fields));
  printf("%lf\n", ameriskur(fields));
  return EXIT_SUCCESS;
}
