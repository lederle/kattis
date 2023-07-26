#include <string.h>
#include <stdio.h>

#include "libdifferent.h"

unsigned long long different(unsigned long long a, unsigned long long b) {
  return a > b ? a - b : b - a;
}
