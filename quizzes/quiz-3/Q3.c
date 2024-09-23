#include <stdio.h>
#include <stdlib.h>

int main() {
    char password[] = "dabswdrd";

    password[0] = 0x70;
    password[2] = 0x73;
    password[6] = 0x00;
    password[7] = 0x69;

    printf("%s", password);
    return EXIT_SUCCESS;
}