#include <stdio.h>
#include <stdlib.h>
// #include "libquadrant.h"

int main(void) {
    int x, y;
    if (scanf("%d\n%d", &x, &y) == EOF)
        return EXIT_FAILURE;

    if (x > 0 && y > 0) printf("%d\n", 1);
    if (x < 0 && y > 0) printf("%d\n", 2);
    if (x < 0 && y < 0) printf("%d\n", 3);
    if (x > 0 && y < 0) printf("%d\n", 4);
    
    return EXIT_SUCCESS;
}
