#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libechoechoecho.h"

//

int main(void) {
  char input[MAX_WORD + 1];
  assert(scanf("%s", input));
  char output[MAX_WORD * 3 + 3];
  echoechoecho(input, output);
  printf("%s\n", output);
  return EXIT_SUCCESS;
}
