
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t multiplyUsingBits(uint32_t a, uint32_t b)
{
    uint32_t result = 0;

    while (b != 0)
    {
        if (b & 1U)
            result += a;

        a <<= 1;
        b >>= 1;
    }

    return result;
}

int main()
{
    uint32_t a = 13;
    uint32_t b = 7;

    cout << "Product: "
        << multiplyUsingBits(a, b) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Expected output:
Product: 91

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_05_multiply_using_bitwise.c -o o_multiply_using_bitwise

./o_multiply_using_bitwise

*/
//--------------------------------------------------


