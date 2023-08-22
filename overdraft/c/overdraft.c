#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
// #include "liboverdraft.h"

int main(void) {
    int n;
    assert(scanf("%d", &n) == 1);

    long t, min_bal = LONG_MAX, bal = 0;
    while (n--) {
        assert(scanf("%ld", &t) == 1);
        bal += t;
        if (bal < min_bal)
            min_bal = bal;
    }
    if (min_bal < 0)
        printf("%ld\n", -min_bal);
    else
        printf("0\n");
    return EXIT_SUCCESS;
}
