#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libsmil.h"

int main(void) {
    char line[2049];
    assert(fgets(line, 2049, stdin));
    int *smile_addr = smil(line);
    int n = 0;
    while (smile_addr[n] != -1) {
        printf("%d\n", smile_addr[n]);
        n++;
    }
    free(smile_addr);

    return EXIT_SUCCESS;
}
