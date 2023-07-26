#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libthelastproblem.h"

int main(void) {
  char name[50];
  if(!scanf("%50[^\n]", name))
    return EXIT_FAILURE;
  printf("%s\n", theLastProblem(name));
  return EXIT_SUCCESS;
}
