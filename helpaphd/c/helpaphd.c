#include <stdio.h>
#include <stdlib.h>
// #include "libhelpaphd.h"

int main(void) {
    int N;
    if (scanf("%d\n", &N) == EOF)
        return EXIT_FAILURE;

    char null_read[10];
    int c, a, b;
    while (N--) {
        if ((c = getchar()) == 'P') {
            printf("skipped\n");
            if (scanf("%s\n", null_read) == EOF)
                return EXIT_FAILURE;
            continue;
        } else {
            ungetc(c, stdin);
            if (scanf("%d+%d\n", &a, &b) == EOF)
                return EXIT_FAILURE;
            printf("%d\n", a + b);
        }
    }

    return EXIT_SUCCESS;
}
