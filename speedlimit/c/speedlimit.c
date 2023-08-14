#include <stdio.h>
#include <stdlib.h>
// #include "libspeedlimit.h"

int main(void) {
    int n;
    while (1) {
        if (scanf("%d", &n) != 1)
            return EXIT_FAILURE;
        if (n == -1)
            return EXIT_SUCCESS;
        int s, last_t = 0, t, d = 0;
        while (n--) {
            if (scanf("%d %d", &s, &t) != 2)
                return EXIT_FAILURE;
            d += s * (t - last_t);
            last_t = t;
        }
        printf("%d miles\n", d);
    }
}
