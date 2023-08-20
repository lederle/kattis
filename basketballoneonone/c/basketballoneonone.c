#include <stdio.h>
#include <stdlib.h>
// #include "libbasketballoneonone.h"

int main(void) {
    char p;
    int s;
    int lead;
    int A = 0, B = 0;
    while (scanf("%c%d", &p, &s) == 2) {
        if (p == 'A') 
            A += s;
        else
            B += s;

        lead = A > B ? A : B;

        if (lead >= 11 && abs(A - B) >= 2) {
            printf("%c\n", p);
            return EXIT_SUCCESS;
        }
    }
    printf("FAIL\n");

    return EXIT_FAILURE;
}
