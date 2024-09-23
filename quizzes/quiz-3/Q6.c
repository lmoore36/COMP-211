#include <stdio.h>

int find_something(int arr[], int size) {
    int x = arr[0];
    int y = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > x) {
            y = x;
            x = arr[i];
        } else if (arr[i] > y && arr[i] < x) {
            y = arr[i];
        }
    }
    
    return y;
}

int main() {
    int arr1[] = {5, 2, 8, 1, 9};
    int arr2[] = {10, 11, 9, 8, 7, 6};
    int arr3[] = {1, 2, 3, 4, 5};
    
    printf("%d %d %d", find_something(arr1, 5), find_something(arr2, 6), find_something(arr3, 5));

    return 0;
}