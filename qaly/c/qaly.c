#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    double qaly;
    if (scanf("%d", &N) == EOF)
        return EXIT_FAILURE;
    while (N--) {
        double q, y;
        if (scanf("%lf %lf", &q, &y) == EOF)
            return EXIT_FAILURE;
        qaly += q * y;
    }
    printf("%.3lf\n", qaly);
    return EXIT_SUCCESS;
}
