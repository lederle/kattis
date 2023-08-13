#include <stdio.h>
#include <stdlib.h>
// #include "libstatistics.h"

int main(void) {
    int n, case_no = 1;
    while (scanf("%d", &n) != EOF) {
        int val, min = 1000000, max = -1000000;
        while (n--) {
            scanf("%d", &val);
            if (val < min)
                min = val;
            if (val > max)
                max = val;
        }
        printf("Case %d: %d %d %d\n", case_no, min, max, max - min);
        case_no++;
    }

    return EXIT_SUCCESS;
}
