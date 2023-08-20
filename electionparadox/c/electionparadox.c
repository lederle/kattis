#include <stdio.h>
#include <stdlib.h>
// #include "libelectionparadox.h"

int cmp(const void*, const void*);

int main(void) {
    int N;
    if (scanf("%d", &N) != 1)
        return EXIT_FAILURE;

    int R[N];
    int p;
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &p) != 1)
            return EXIT_FAILURE;
        R[i] = p;
    }
    
    qsort(R, N, sizeof(int), cmp);
    int S = 0;
    for (int i = 0; i < N; i++) {
        if (i < N / 2)
            S += R[i];
        else
            S += R[i] / 2;
    }
    printf("%d\n", S);
    
    return EXIT_SUCCESS;
}

int cmp(const void* a, const void* b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;

    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}
