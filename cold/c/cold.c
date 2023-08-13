#include <stdio.h>
#include <stdlib.h>
// #include "libcold.h"

int main(void) {
    int n;
    if (scanf("%d", &n) != 1)
        return EXIT_FAILURE;
    int t, c = 0;
    while (n--) {
        if (scanf("%d", &t) != 1)
            return EXIT_FAILURE;
        if (t < 0)
            c++;
    }
    printf("%d\n", c);

    return EXIT_SUCCESS;
}
