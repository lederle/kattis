#include <stdlib.h>
#include <assert.h>
#include "libsmil.h"

int *smil(const char *line) {
    const char *c = line;
    int len = 0;
    while (*c++ != '\n')
        len++;

    int *res = calloc(len, sizeof(int));
    assert(res);

    int res_len = 0;
    int eyes = ':';
    int smile = ')';
    int wink = ';';
    int nose = '-';
    for (int i = 0; i < len - 1; i++) {
        if ((line[i] == eyes && line[i + 1] == smile) ||
            (line[i] == wink && line[i + 1] == smile) ||
            (line[i] == wink && line[i + 1] == nose && line[i + 2] == smile) ||
            (line[i] == eyes && line[i + 1] == nose && line[i + 2] == smile)) {
            res[res_len++] = i;
        }
    }
    res[res_len] = -1;

    return res;
}
