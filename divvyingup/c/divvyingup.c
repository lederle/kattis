#include <stdio.h>
#include <stdlib.h>
// #include "libdivvyingup.h"

int main(void) {
    int n;
    if (scanf("%d", &n) != 1)
        return EXIT_FAILURE;

    int S = 0, w;
    while (n--) {
        if (scanf("%d", &w) != 1)
            return EXIT_FAILURE;

        S += w;
    }        
    S % 3 != 0 ? printf("no\n") : printf("yes\n");

    return EXIT_SUCCESS;
}
