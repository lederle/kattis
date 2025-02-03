#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libdecimaldeletion.h"

//

int main(void) {
  double input;
  assert(scanf("%lf", &input));
  printf("%d\n", decimaldeletion(input));
  return EXIT_SUCCESS;
}
