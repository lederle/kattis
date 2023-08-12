#include <stdio.h>
#include <stdlib.h>
// #include "libtemperature.h"

int main(void) {
    int X, Y;
    if (scanf("%d %d", &X, &Y) == EOF)
        return EXIT_FAILURE;

    if (Y == 1) { 
        if (X != 0)
            printf("IMPOSSIBLE\n");
         if (X == 0)
            printf("ALL GOOD");
    } else
        printf("%lf\n", X * 1.0 / (1 - Y));

    return EXIT_SUCCESS;
}
