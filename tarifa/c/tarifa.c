#include <stdio.h>
#include <stdlib.h>
// #include "libtarifa.h"

int main(void) {
    int X, N;
    if (scanf("%d", &X) == EOF)
        return EXIT_FAILURE;
    if (scanf("%d", &N) == EOF)
        return EXIT_FAILURE;
    int T = X * (N + 1);
    while (N--) {
        int p;
        if (scanf("%d", &p) == EOF)
            return EXIT_FAILURE;
        T -= p;
    }
    printf("%d\n", T);
    return EXIT_SUCCESS;
}
