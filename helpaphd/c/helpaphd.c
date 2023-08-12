#include <stdio.h>
#include <stdlib.h>
// #include "libhelpaphd.h"

int main(void) {
    int N;
    if (scanf("%d\n", &N) == EOF)
        return EXIT_FAILURE;

    char line[10];
    int a, b;
    while (N--) {
        if (!fgets(line, 10, stdin))
            return EXIT_FAILURE;
        if (line[0] == 'P') {
            printf("skipped\n");
            continue;
        } else {
            sscanf(line, "%d+%d", &a, &b);
            printf("%d\n", a + b);
        }
    }

    return EXIT_SUCCESS;
}
