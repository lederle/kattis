#include "libfilip.h"

#include <math.h>

void filip(int N, int *res) {
  int ndigits = 3, m = 1;
  ndigits = pow(10, ndigits - 1);
  *res = 0;
  while (ndigits > 0) {
    *res += m * ((N / ndigits) % 10);
    m *= 10;
    ndigits /= 10;
  }
}
