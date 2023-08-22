#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
// #include "liboddecho.h"

int main(void) {
    int N;
    assert(scanf("%d", &N) == 1);

    char w[101];
    for (int i = 1; i <= N; i++) {
        assert(scanf("%s", w) == 1);
        if (i % 2 == 1)
            printf("%s\n", w);
    }

    return EXIT_SUCCESS;
}
