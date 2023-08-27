#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libspellingbee.h"

int main(void) {
  char letters[8];
  assert(scanf("%s", letters) == 1);
  int n;
  assert(scanf("%d", &n) == 1);

  char word[25];
  while (scanf("%s", word) == 1) {
    if (spellingbee_bool(letters, word)) printf("%s\n", word);
  }

    return EXIT_SUCCESS;
}
