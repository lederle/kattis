#include "libgreetings2.h"

#include <string.h>

void greetings2(char *greeting, char *output) {
  int len = strlen(greeting);
  int out_index = 0;
  output[out_index] = 'h';
  for (out_index = 1; out_index <= 2 * (len - 2); out_index++)
    output[out_index] = 'e';
  output[out_index] = 'y';
  output[out_index + 1] = '\0';
}
