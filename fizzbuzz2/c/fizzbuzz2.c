#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libfizzbuzz2.h"


int main(void) {
    int N, M;
    if (scanf("%d %d", &N, &M) != 2)
        return EXIT_FAILURE;

    int candidates = N;
    int best = -1, best_idx = 0;
    while (N--) {
        char val[256], spec[10];
        int correct = 0;
        for (int i = 1; i <= M; i++) {
            if (scanf("%s", val) != 1) 
                return EXIT_FAILURE;

            if (i % 3 == 0 && i % 5 == 0)
                strcpy(spec, "fizzbuzz");
            else if (i % 3 == 0)
                strcpy(spec, "fizz");
            else if (i % 5 == 0)
                strcpy(spec, "buzz");
            else {
                int len = snprintf(NULL, 0, "%d", i);
                char* str = malloc(len + 1);
                snprintf(spec, len + 1, "%d", i);
                free(str);
            }

            if (strcmp(spec, val) == 0)
                correct++;
        }
        if (correct > best) {
            best = correct;
            best_idx = candidates - N;
        }
    }
    printf("%d\n", best_idx);
                 
    return EXIT_SUCCESS;
}
