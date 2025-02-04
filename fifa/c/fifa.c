#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libfifa.h"

//

int main(void) {
  int total, yearly;
  assert(scanf("%d\n%d", &total, &yearly));
  printf("%d\n", fifa(total, yearly));
  return EXIT_SUCCESS;
}
