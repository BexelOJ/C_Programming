#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Declare a function pointer
    int (*operation)(int, int);

    // Assign the pointer to the 'add' function
    operation = add;

    printf("Addition: %d\n", operation(10, 5));

    // Assign the pointer to the 'subtract' function
    operation = subtract;
    
    printf("Subtraction: %d\n", operation(10, 5));

    // Assign the pointer to the 'multiply' function
    operation = multiply;

    printf("Multiplication: %d\n", operation(10, 5));

    return 0;
}

// Output:

// Addition: 15
// Subtraction: 5
// Multiplication: 50

