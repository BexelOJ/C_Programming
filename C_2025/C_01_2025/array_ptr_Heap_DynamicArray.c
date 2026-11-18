#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;

    // Allocate an array of pointers
    int **array = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        array[i] = malloc(cols * sizeof(int));  // Allocate each row
    }

    // Fill the array with values and print it
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i * cols + j;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}


/*

You can use a pointer to create a dynamically allocated 2D array. Here’s how to
allocate a 2D array of integers with 3 rows and 4 columns:

*/

