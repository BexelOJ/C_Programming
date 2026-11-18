#include <stdio.h>

int add(int a, int b)
    {
        return a + b;
    }

int subtract(int a, int b)
    {
        return a - b;
    }

int multiply(int a, int b)
    {
        return a * b;
    }


int main()
{
  // Array of function pointers
    int result;
    int (*operations[3])(int, int) = { add, subtract, multiply };

    // int choice = 2; // let's say 2 means multiply
    // int result = operations[choice](10, 5);
    // printf("Result: %d\n", result); // Output: Result: 50 if choice is 2

    result = operations[0](10, 5);
    printf("Result: %d\n", result); // Output: Result: 50 if choice is 2

    result = operations[1](10, 5);
    printf("Result: %d\n", result); // Output: Result: 50 if choice is 2

    result = operations[2](10, 5);
    printf("Result: %d\n", result); // Output: Result: 50 if choice is 2
    return 0;
}

// Output:

// Result: 15
// Result: 5
// Result: 50


