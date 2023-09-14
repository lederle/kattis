#include "libdigits.h"

#include <math.h>
#include <string.h>

int digits(char *A) {
  int index = 2, next;
  int curr = strlen(A);
  while (1) {
    next = 1.0 + floor(log10(curr));
    if (curr == next) break;
    index++;
    curr = next;
  }
  return index;
}
