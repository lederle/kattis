#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "libzanzibar.h"

int main(void) {
  int T;
  assert(scanf("%d", &T) == 1);
  while (T--) {
    int P, pop[1024], cnt = -1;
    for (int i = 0; scanf("%d", &P) == 1; i++) {
      if (P == 0) {
        cnt = i;
        break;
      }
      pop[i] = P;
    }
    printf("%d\n", zanzibar(cnt, pop));
  }

    return EXIT_SUCCESS;
}
