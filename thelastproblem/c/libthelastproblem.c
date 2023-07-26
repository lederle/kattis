#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libthelastproblem.h"

char *theLastProblem(char * name) {
  int len = strlen(name);
  int boiler_len = 27;
  char *ret = malloc(len + boiler_len);
  snprintf(ret, len + boiler_len, "Thank you, %s, and farewell!", name);
  return ret;
}
