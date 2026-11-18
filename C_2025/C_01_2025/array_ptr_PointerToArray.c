#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5];  // Declaring Array Pointer
    ptr = &arr;     // Mapping Pointer to Array

    // int (*ptr)[5] = &arr;  // Pointer to the entire array of 5 integers

    // Access elements through the pointer
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*ptr)[i]);
    }
    printf("\n");

    return 0;
}


// Pointer to an Array:
// A pointer to an array points to the entire array, not just the first element.
