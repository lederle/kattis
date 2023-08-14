#include <stdio.h>
#include <stdlib.h>
// #include "libjobexpenses.h"

int main(void) {
    int N;
    if (scanf("%d", &N) != 1)
        return EXIT_FAILURE;
    int k, expenses = 0;
    while (N--) {
        if (scanf("%d", &k) != 1)
            return EXIT_FAILURE;
        if (k < 0)
            expenses += k;
    }
    printf("%d\n", -expenses);
    return EXIT_SUCCESS;
}
