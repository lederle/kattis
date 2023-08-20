#include <stdio.h>
#include <stdlib.h>
// #include "libcinema.h"

int main(void) {
    int N, M;
    if (scanf("%d %d", &N, &M) != 2)
        return EXIT_FAILURE;
    
    int a, G = M;
    while (G-- > 0) {
        if (scanf("%d", &a) != 1) 
            return EXIT_FAILURE; 
        if (a <= N) {
            N -= a;
            M--;
        }
    }
    printf("%d\n", M);
    return EXIT_SUCCESS;
}
