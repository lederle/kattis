#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libbabybites.h"

int main(void) {
    int n;
    if (scanf("%d", &n) != 1)
        return EXIT_FAILURE;
    char count[7];
    int c;
    for (int i = 1; i <= n; ++i) {
        if (scanf("%6s", count) != 1)
            return EXIT_FAILURE;
        if (strcmp(count, "mumble") == 0)
            continue;
        else {
            c = atoi(count);
            if (c != i) {
                printf("something is fishy\n");
                return EXIT_SUCCESS;
            }
        }
    }
    printf("makes sense\n");
    return EXIT_SUCCESS;
}
