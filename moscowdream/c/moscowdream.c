#include <stdio.h>
#include <stdlib.h>
// #include "libmoscowdream.h"

int main(void) {
    int a, b, c, n;
    if (scanf("%d %d %d %d", &a, &b, &c, &n) == EOF)
        return EXIT_FAILURE;
    // if (n < 3)
    //     printf("NO\n");
    // else if (a < 1 || b < 1 || c < 1)
    //     printf("NO\n");
    // else if (a + b + c < n)
    //     printf("NO\n");
    // else
    //     printf("YES\n");
    // return EXIT_SUCCESS;

    if (a > 0 && b > 0 && c > 0 && a + b + c >= n && n >= 3)
        printf("YES\n");
    else
        printf("NO\n");
    return EXIT_SUCCESS;
}
