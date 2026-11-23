
#include <iostream>
#include <cstdint>
using namespace std;

void swapUsingXOR(uint32_t& a, uint32_t& b)
{
    if (&a == &b)
        return;

    a ^= b;
    b ^= a;
    a ^= b;
}

int main()
{
    uint32_t a = 10;
    uint32_t b = 20;

    cout << "Before swap: a = " << a
        << ", b = " << b << endl;

    swapUsingXOR(a, b);

    cout << "After swap: a = " << a
        << ", b = " << b << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Before swap: a = 10, b = 20
After swap: a = 20, b = 10

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_01_swap_integers_using_xor.c -o o_swap_integers_using_xor

./o_swap_integers_using_xor

*/
//--------------------------------------------------


