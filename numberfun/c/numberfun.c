#include <stdio.h>
#include <stdlib.h>
// #include "libnumberfun.h"

int main(void) {
    int N;
    if (scanf("%d", &N) == EOF)
        return EXIT_FAILURE;

    double a, b, c;
    while (N--) {
        if (scanf("%lf %lf %lf", &a, &b, &c) == EOF)
            return EXIT_FAILURE;
        
        double add = a + b;
        double sub1 = a - b;
        double sub2 = b - a;
        double mul = a * b;
        double div1 = a / b;
        double div2 = b / a;

        if (add == c || sub1 == c || sub2 == c || mul == c || div1 == c || div2 == c)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
        

    return EXIT_SUCCESS;
}
