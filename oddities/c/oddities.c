#include <stdio.h>
#include <stdlib.h>
// #include "liboddities.h"

int main(void) {
    int n, x;
    if (scanf("%d", &n) == EOF)
        return EXIT_FAILURE;
    while (n--) {
        if (scanf("%d", &x) == EOF)
            return EXIT_FAILURE;
        printf("%d is %s\n", x, x % 2 == 0 ? "even" : "odd");
    }

    return EXIT_SUCCESS;
}
