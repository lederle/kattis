#include "libfimmstudagstilbod.h"

int fimmstudagstilbod(int year) {
  return 1000 + (year - 2020 > 0 ? year - 2020 : 0) * 100;
}
