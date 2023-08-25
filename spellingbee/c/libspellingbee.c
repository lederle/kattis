#include "libspellingbee.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **spellingbee(char letters[], char *dict[], int dict_size) {
  int size = 2, match_count = 0;
  char **matches = malloc(size * sizeof(*matches));
  assert(matches);

  for (int dict_iter = 0; dict_iter < dict_size; dict_iter++) {
    char leader = letters[0];
    if (strchr(dict[dict_iter], leader) == NULL) continue;

    size_t span = strspn(dict[dict_iter], letters);
    if (dict[dict_iter][span] != '\0') continue;

    match_count++;
    char *match = dict[dict_iter];
    while (match_count >= size) {
      size *= 2;
      matches = realloc(matches, size * sizeof(*matches));
      assert(matches);
    }
    int slen = strlen(match) + 1;
    matches[match_count - 1] = malloc(slen * sizeof(char));
    sprintf(matches[match_count - 1], "%s", match);
  }
  matches[match_count] = malloc(3 * sizeof(char));
  sprintf(matches[match_count], "%s", "-1");

  return matches;
}
