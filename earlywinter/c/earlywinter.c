#include <stdio.h>
#include <stdlib.h>
// #include "libearlywinter.h"

int main(void) {
    int n, dm;
    if (scanf("%d %d", &n, &dm) != 2)
        return EXIT_FAILURE;
    int d, N = n, count = 0;
    while (n--) {
        if (scanf("%d", &d) != 1)
            return EXIT_FAILURE;
        if (d > dm)
            count++;
        else
            break;
    }
    if (count == N)
        printf("It had never snowed this early!\n");
    else
        printf("It hadn't snowed this early in %d years!\n", count);

    return EXIT_SUCCESS;
}
