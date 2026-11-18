#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3] = { &a, &b, &c };  // Array of 3 integer pointers

    for (int i = 0; i < 3; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");

    return 0;
}

/*

Array of Pointers:
An array of pointers is different from a pointer to an array. It’s a collection of pointers where each pointer can point to a different variable or array element.

*/

