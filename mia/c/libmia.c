#include "libmia.h"

int mia(int a, int b, int A, int B) {
  if (mia_lookup(a, b) > mia_lookup(A, B)) return 1;
  if (mia_lookup(A, B) > mia_lookup(a, b))
    return 2;
  else
    return 0;
}

/* LOOKUP TABLE
 * ------------
 * 1000     mia
 * 600      66
 * 550      55
 * 450      44
 * 400      33
 * 350      22
 * 300      11
 * 65       65
 * 64       64
 * ...      ...
 * 32       32
 */

int mia_lookup(int a, int b) {
  if ((a == 1 && b == 2) || (a == 2 && b == 1)) return 1000;
  if (a == b)
    return 50 * a + 300;
  else
    return a > b ? 10 * a + b : 10 * b + a;
}
