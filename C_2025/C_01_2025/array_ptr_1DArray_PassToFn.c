#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);  // Passing array to function
    return 0;
}


/*

Passing an Array to a Function using Array Pointer
You can use a pointer to pass an array to a function.

This is 1D Array

*/
