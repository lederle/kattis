#include "libartichoke.h"

#include <math.h>

double artichoke(int p, int a, int b, int c, int d, int n) {
  double price[n + 1];

  double max_el = price[1];
  double max_decline = -1.0;

  for (int k = 1; k <= n; k++) {
    price[k] = p * (sin(a * k + b) + cos(c * k + d) + 2);
    if (price[k] > max_el) max_el = price[k];
    max_decline = fmax(max_el - price[k], max_decline);
  }

  return max_decline;
}
