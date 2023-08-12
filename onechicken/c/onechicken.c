#include <stdio.h>
#include <stdlib.h>
// #include "libonechicken.h"

int main(void) {
    int N, M;
    if (scanf("%d %d", &N, &M) == EOF)
        return EXIT_FAILURE;
    
    char *plural = abs(N - M) == 1 ? "piece" : "pieces";
    
    if (N > M)
        printf("Dr. Chaz needs %d more %s of chicken!\n", N - M, plural);
    else
        printf("Dr. Chaz will have %d %s of chicken left over!\n", M - N, plural);

    return EXIT_SUCCESS;
}
