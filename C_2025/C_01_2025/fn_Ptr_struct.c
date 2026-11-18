#include <stdio.h>

int add(int, int);            // Add function declaration
    
struct point{
    int a;
    float b;
    int (*fn_ptr)(int, int);  // function pointer declaration inside a structure
}p1,p2;                       // declared two instance/(objects in C++) for the structure named 'point'

int main()
{
struct point p3;              // decalred a third instance/(objects in C++) for the structure named 'point'
int rr;

p3.fn_ptr = add;
    
rr = p3.fn_ptr(3,4);          // Add function call

printf("The Result of Addition is %d", rr);

return 0;
}

int add(int x, int y)         // Add function definition
    {
        int res = x + y;
        return res;
    }

// Output:

// The Result of Addition is 7
