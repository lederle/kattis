#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// #include "libthanos.h"

int main(void) {
    int T;
    if (scanf("%d", &T) != 1)
        return EXIT_FAILURE;

    double P, R, F;
    while (T--) {
        if (scanf("%lf %lf %lf", &P, &R, &F) != 3)
            return EXIT_FAILURE;
        
        int c = 0;
        while (P <= F) {
            P *= R;
            c++;
        }
        printf("%d\n", c);
    }
    return EXIT_SUCCESS;
}
