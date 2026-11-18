#include <stdio.h>

void print2DArray(int (*arr)[3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print2DArray(arr, 2);  // Passing 2D array to function
    return 0;
}


/*

Passing an Array to a Function using Array Pointer
You can use a pointer to pass an array to a function.
This is a 2D Array

*/
