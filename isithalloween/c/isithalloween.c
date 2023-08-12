#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int seq(char *s, char *t);

int main(void) {
    char m[4], d[3];
    if (scanf("%s %s", m, d) == EOF)
        return EXIT_FAILURE;
    if ((seq(m, "DEC") && seq(d, "25")) || (seq(m, "OCT") && seq(d, "31")))
        printf("yup\n");
    else
        printf("nope\n");

    return EXIT_SUCCESS;
}

int seq(char *s, char *t) {
    return strcmp(s, t) == 0;
}
