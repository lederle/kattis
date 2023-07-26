#include <stdio.h>
#include <stdlib.h>
#include "libromans.h"

int main(void) {
  double miles;
  if (scanf("%lf", &miles) != 1)
    return EXIT_FAILURE;
  printf("%d\n", romans(miles));
  
  return EXIT_SUCCESS;
}
