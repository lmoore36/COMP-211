#include <stdlib.h>
#include <stdio.h>

int main() {
    int i = 2;
    int arr[7] = { 9, 8, 7, 6, 5, 4, 3 };
    arr[i++] = 0;

    // Print the array after modification at line 7
    for (int j = 0; j < 7; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    arr[i+=3] = 1;

    for (int j = 0; j < 7; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    arr[i-1] = i + 3;
    arr[--i] = -3;

    for (int j = 0; j < 7; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}