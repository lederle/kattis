#include <stdio.h>
#include <stdlib.h>
// #include "libmult.h"

int main(void) {
    int n, m;
    if (scanf("%d", &n) != 1)
        return EXIT_FAILURE;
    
    if (scanf("%d", &m) != 1)
        return EXIT_FAILURE;

    int i;
    while (scanf("%d", &i) == 1) 
        if (i % m == 0) {
            printf("%d\n", i);
            if (scanf("%d", &i) != 1)
                return EXIT_FAILURE;
            m = i;
        }
            
    return EXIT_SUCCESS;
}
