#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libespresso.h"

int main(void) {
    int n, s;
    if (scanf("%d %d", &n, &s) != 2)
        return EXIT_FAILURE;

    char order[3];
    int next, S = s, fill = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%s", order) != 1)
            return EXIT_FAILURE;

        if (strlen(order) == 2)
            next =  (order[0] - '0') + 1;
        else
            next = order[0] - '0';

        if (S < next) {
            fill++;
            S = s;
        }
        S-= next;
    }

    printf("%d\n", fill);
    return EXIT_SUCCESS;
}
