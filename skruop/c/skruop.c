#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// #include "libskruop.h"
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(void) {
    int n;
    assert(scanf("%d", &n) == 1);
    char req[10], null_read[10];
    int vol = 7;
    while (n--) {
        assert(scanf("%s %s", null_read, req) == 2);
        strcmp(req, "op!") == 0 ? vol++ : vol--;
        vol = MIN(vol, 10);
        vol = MAX(0, vol);
    }
    printf("%d\n", vol);
    return EXIT_SUCCESS;
}
