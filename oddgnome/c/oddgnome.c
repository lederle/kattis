#include <stdio.h>
#include <stdlib.h>
// #include "liboddgnome.h"

int main(void) {
    int n;
    scanf("%d", &n);
    while(n--) {
        int g;
        scanf("%d", &g);
        int id, last_id, king, null_read, found = 0;
        scanf("%d", &last_id);
        for (int i = 2; i <= g; ++i) {
            if (found) {
                scanf("%d", &null_read);
                continue;
            }
            scanf("%d", &id);
            if (id == last_id + 1) {
                last_id = id;
            } else {
                king = i;
                found = 1;
            }
        }
        printf("%d\n", king);
    }
    return EXIT_SUCCESS;
}
