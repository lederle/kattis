#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libfimmstudagstilbod.h"

//

int main(void) {
  int year;
  assert(scanf("%d", &year));
  printf("%d\n", fimmstudagstilbod(year));
  return EXIT_SUCCESS;
}
