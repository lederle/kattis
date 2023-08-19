#include <stdio.h>
#include <stdlib.h>
// #include "libstararrangements.h"

int main(void) {
    int S;
    if (scanf("%d", &S) != 1)
        return EXIT_FAILURE;

    printf("%d:\n", S);
    for (int R = 2; R <= S / 2 + 1; ++R) {
        if (S % (2 * R - 1) == 0 || (S + R - 1) % (2 * R - 1) == 0)
            printf("%d,%d\n", R, R - 1);

        if (S % R == 0)
            printf("%d,%d\n", R, R);
    }

    return EXIT_SUCCESS;
}
