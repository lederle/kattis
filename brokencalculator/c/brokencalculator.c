#include <stdio.h>
#include <stdlib.h>
// #include "libbrokencalculator.h"

int main(void) {
    int n;
    if (scanf("%d", &n) != 1)
        return EXIT_FAILURE;

    long long a, b;
    char op;
    long long prev = 1;
    while (n--) {
        if (scanf("%lld %c %lld", &a, &op, &b) != 3)
            return EXIT_FAILURE;
        
        long long res;

        switch (op) {
            case '+':
                res = (a + b) - prev;
                break;
            case '-':
                res = (a - b) * prev;
                break; 
            case '*':
                res = (a * b) * (a * b);
                break;
            case '/':
                res = a % 2 == 0 ? a / 2 : (a + 1) / 2;
                break;
        }
        printf("%lld\n", res);
        prev = res;
    }

    return EXIT_SUCCESS;
}
