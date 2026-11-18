#include <stdio.h>

int add(int, int);  // function declaration

int main()
{
int res;
int (*FnPtr) (int, int);  // function pointer declaration

FnPtr = add;          // function pointer declaration method_01, without &
// FnPtr = &add;      // function pointer declaration method_02, with &
    
res = FnPtr(3, 4);           // function call
printf("Sum is %d\n", res);

return 0;
}

int add(int x, int y)           // function definition
{
    int sum = x + y;
    return sum;
}

// Output:

// Sum is 7



