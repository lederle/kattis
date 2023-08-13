#include <stdio.h>
#include <stdlib.h>
// #include "liblicensetolaunch.h"

int main(void) {
    int n;
    scanf("%d", &n);
    int jc, min_index = 0, min = 1000000000;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &jc);
        if (jc < min) {
            min = jc;
            min_index = i;
        }
    }
    printf("%d\n", min_index);

    return EXIT_SUCCESS;
}
