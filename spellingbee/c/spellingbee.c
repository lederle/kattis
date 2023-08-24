#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "libspellingbee.h"

int main(void) {
    char letters[7];
    assert(scanf("%s", letters) == 1);
    int n;
    assert(scanf("%d", &n) == 1);

    char word[25];
    char *dict[n];
    for (int i = 0; i < n; i++) {
        assert(scanf("%s", word) == 1);
        dict[i] = word;
    }

    char **ret = spellingbee(letters, dict);
    int w = 0;
    while (strcmp(ret[w], "-1") != 0) {
        printf("%s\n", ret[w]);
        w++;
}

    return EXIT_SUCCESS;
}
