#include <stdio.h>
#include <stdlib.h>
// #include "libfizzbuzz.h"

int main(void) {
    int X, Y, N;
    if (scanf("%d %d %d", &X, &Y, &N) == EOF)
        return EXIT_FAILURE;

    for (int i = 1; i <= N; ++i) {
        if (i % X == 0 && i % Y == 0)
            printf("FizzBuzz\n");
        else if (i % X == 0)
            printf("Fizz\n");
        else if (i % Y == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return EXIT_SUCCESS;
}
