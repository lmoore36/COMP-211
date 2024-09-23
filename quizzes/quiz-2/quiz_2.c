#include <stdio.h>
#include <stdlib.h>
  
int main() {
    unsigned int sum = 0;
    unsigned int i = 10;
    
    for (; i >= 0; i--) {
        sum += i;
    }

    printf("%u\n", sum);
    return EXIT_SUCCESS;
  }     