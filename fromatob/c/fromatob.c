#include <stdio.h>
#include <stdlib.h>
// #include "libfromatob.h"

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2)
        return EXIT_FAILURE;

    int t = 0;
    while (a != b) {
        if (a > b)
            if (a % 2 != 0) {
                a = (a + 1) / 2;
                t += 2;
                continue;
            }
            else
                a = a / 2;
        else
            a = a + 1;
        t++;
    }
    printf("%d\n", t);
    
    return EXIT_SUCCESS;
}
