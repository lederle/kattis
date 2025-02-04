#include "libechoechoecho.h"

#include <string.h>

void echoechoecho(char *input, char *output) {
  int len = strlen(input);
  char input_and_space[len + 1];
  for (int i = 0; i < len; i++) input_and_space[i] = input[i];
  input_and_space[len] = ' ';
  len++;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < len; j++) {
      output[i * len + j] = input_and_space[j];
    }
  }
  output[3 * len - 1] = '\0';
}
