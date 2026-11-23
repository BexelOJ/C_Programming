
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t subtractWithoutMinus(uint32_t a, uint32_t b)
{
    // Two's complement: ~b + 1

    b = ~b;

    uint32_t carry = 1;

    while (carry != 0)
    {
        uint32_t nextCarry = b & carry;

        b = b ^ carry;
        carry = nextCarry << 1;
    }

    // Add a and the two's complement of b

    while (b != 0)
    {
        uint32_t carry = (a & b) << 1;

        a = a ^ b;
        b = carry;
    }

    return a;
}

int main()
{
    uint32_t a = 25;
    uint32_t b = 8;

    cout << "Difference: "
        << subtractWithoutMinus(a, b) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Expected output:
Difference: 17

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_02_subtract_without_minus.c -o o_subtract_without_minus

./o_subtract_without_minus

*/
//--------------------------------------------------


