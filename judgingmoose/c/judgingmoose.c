#include <stdio.h>
#include <stdlib.h>
// #include "libjudgingmoose.h"

int main(void) {
    int left, right;
    if (scanf("%d %d", &left, &right) == EOF)
        return EXIT_FAILURE;

    if (left != right) {
        int max = left > right ? left : right;
        printf("Odd %d\n", 2 * max);
    } else if (left != 0)
        printf("Even %d\n", 2 * left);
    else
        printf("Not a moose\n");
    
    return EXIT_SUCCESS;
}
