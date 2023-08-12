#include <stdio.h>
#include <stdlib.h>
// #include "libeligibility.h"

int main(void) {
    int n;
    if (scanf("%d", &n) == EOF)
        return EXIT_FAILURE;

    
    char name[31];
    int year_began, year_dob, courses_completed, null_read;

    while (n--) {
        if (scanf("%s %d/%d/%d %d/%d/%d %d", 
                name,
                &year_began, &null_read, &null_read,
                &year_dob, &null_read, &null_read, 
                &courses_completed) == EOF) {
            return EXIT_FAILURE;
        }
        
        if (year_began >= 2010) 
            printf("%s eligible\n", name);
        else if (year_dob >= 1991)
            printf("%s eligible\n", name);
        else if (courses_completed >= 41)
            printf("%s ineligible\n", name);
        else
            printf("%s coach petitions\n", name);
    }
                    
    return EXIT_SUCCESS;
}
