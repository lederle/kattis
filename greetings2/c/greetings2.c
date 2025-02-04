#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libgreetings2.h"

//

int main(void) {
  char greeting[MAX_GREETING + 1];
  assert(scanf("%s", greeting));
  char response[MAX_GREETING * 2];
  greetings2(greeting, response);
  printf("%s\n", response);
  return EXIT_SUCCESS;
}
