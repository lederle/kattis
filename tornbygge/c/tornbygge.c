#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libtornbygge.h"

int main(void) {
  int N;
  assert(scanf("%d", &N) == 1);
  int width, bricks[N];

  for (int i = 0; i < N; i++) {
    assert(scanf("%d", &width) == 1);
    bricks[i] = width;
  }

  printf("%d\n", tornbygge(bricks, N));

  return EXIT_SUCCESS;
}
