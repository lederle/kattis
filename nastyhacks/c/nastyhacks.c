#include <stdio.h>
#include <stdlib.h>
// #include "libnastyhacks.h"

int main(void) {
    int n;
    if (scanf("%d", &n) == EOF)
        return EXIT_FAILURE;
    int r, e, c;
    while (n--) {
        if (scanf("%d %d %d", &r, &e, &c) == EOF)
            return EXIT_FAILURE;
        
        if (r == e - c)
            printf("does not matter\n");
        else if (r < e - c)
            printf("advertise\n");
        else
            printf("do not advertise\n");
    }
    
    return EXIT_SUCCESS;
}
