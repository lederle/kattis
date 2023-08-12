#include <stdio.h>
#include <stdlib.h>
// #include "libleftbeehind.h"

int main(void) {
    char line[10];
    int x, y;
    while (fgets(line, 10, stdin)) {
        if (sscanf(line, "%d %d", &x, &y), (x || y)) {
            if (x + y == 13)
                printf("Never speak again.\n");
            else if (x > y)
                printf("To the convention.\n");
            else if (x == y)
                printf("Undecided.\n");
            else if (x < y)
                printf("Left beehind.\n");
        }
    }

    return EXIT_SUCCESS;
}
