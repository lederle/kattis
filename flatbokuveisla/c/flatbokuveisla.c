#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libflatbokuveisla.h"

//

int main(void) {
  int slices, residents;
  assert(scanf("%d\n%d", &slices, &residents));
  printf("%d\n", flatbokuveisla(slices, residents));
  return EXIT_SUCCESS;
}
