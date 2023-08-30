#include "libzanzibar.h"

int zanzibar(int n, int pop[n]) {
  int diff, res = 0;
  for (int i = 1; i < n; i++) {
    diff = pop[i] - 2 * pop[i - 1];
    if (diff > 0) res += diff;
  }
  return res;
}
