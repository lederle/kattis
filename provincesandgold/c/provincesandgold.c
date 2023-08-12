#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libprovincesandgold.h"

// 

int main(void) {
    int G, S, C;
    if (scanf("%d %d %d", &G, &S, &C) == EOF)
        return EXIT_FAILURE;

    int bp = 3 * G + 2 * S + C;
    char *victory = bp >= 8 ? 
        "Province" : bp >= 5 ? 
        "Duchy" : bp >= 2 ? 
        "Estate" : "";
    char *treasure = bp >= 6 ? 
        "Gold" : bp >= 3 ? 
        "Silver" : "Copper";
    
    if (strcmp(victory, "") == 0)
        printf("Copper\n");
    else
        printf("%s or %s\n", victory, treasure);
    
    return EXIT_SUCCESS;
}
