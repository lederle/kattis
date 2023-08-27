#include "libtornbygge.h"

int tornbygge(int bricks[], int n) {
  int ret = 1;
  if (n == 1) return ret;

  for (int i = n - 1; i >= 1; i--)
    if (bricks[i] > bricks[i - 1]) ret++;

  return ret;
}
