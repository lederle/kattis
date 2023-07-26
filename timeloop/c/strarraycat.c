#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  char dest[100];
  char *here = dest;
  for (int i = 1; i <= 5; i++) { 
    sprintf(here, "%d", i);
    int stride = i < 10 ? 1 : 2;
    here += stride;
    const char *rest = " Abracadabra\n";
    sprintf(here, "%s", rest);
    here += strlen(rest);
  }
  return 0;
}
