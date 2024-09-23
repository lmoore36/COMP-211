#include <stdio.h>
#include <stdlib.h>
 
int fib(int x){
    if (x==0 || x==1) {
        int mystery = 1;
        return mystery;
    }
        return fib(x-1)+fib(x-2);
}

int main() {
    int mystery = fib(2);
    return EXIT_SUCCESS;
}