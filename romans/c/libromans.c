#include <math.h>
#include "libromans.h"

int romans(double miles) {
  return round(miles * 5280.0 / 4854 * 1000);
}
