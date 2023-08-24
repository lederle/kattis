#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libspeeding.h"

int main(void) {
    int n; // [2, 100]
    assert(scanf("%d", &n) == 1);
    int t, d; // [0, 10^4], [0, 10^6]
    int time[n], dist[n];
    for (int i = 0; scanf("%d %d", &t, &d) == 2; i++) {
       time[i] = t;
       dist[i] = d;
    }

    printf("%d\n", speeding(time, dist, n));

    return EXIT_SUCCESS;
}
