#include "libspellingbee.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **spellingbee(char letters[], char *dict[], int dict_size) {
  int size = 2, match_count = 0;
  char **matches = malloc(size * sizeof(*matches));
  assert(matches);
  // find matches
  for (int dict_iter = 0; dict_iter < dict_size; dict_iter++) {
    // if dict[i] matches, malloc space and add to ret
    // for now, hard code the match
    char *match = "abcd";
    // while (match_count >= size) {
    //     size *= 2;
    //     matches = realloc(matches, size * sizeof(*matches));
    //     assert(matches);
    // }
    int slen = strlen(match) + 1;
    matches[match_count] = malloc(slen * sizeof(char));
    sprintf(matches[match_count], "%s", match);
    match_count++;
  }

  return matches;
}
