
#include <iostream>
#include <cstdint>
#include <stdexcept>
using namespace std;

uint32_t divideUsingBits(
    uint32_t dividend,
    uint32_t divisor,
    uint32_t& remainder)
{
    if (divisor == 0)
        throw invalid_argument("Division by zero");

    uint32_t quotient = 0;
    uint64_t rem = 0;

    for (int bit = 31; bit >= 0; bit--)
    {
        rem = (rem << 1) | ((dividend >> bit) & 1U);

        if (rem >= divisor)
        {
            rem -= divisor;
            quotient |= (1U << bit);
        }
    }

    remainder = static_cast<uint32_t>(rem);

    return quotient;
}

int main()
{
    uint32_t dividend = 100;
    uint32_t divisor = 9;
    uint32_t remainder = 0;

    uint32_t quotient =
        divideUsingBits(dividend, divisor, remainder);

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Quotient: 11
Remainder: 1

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_06_divide_using_bitwise.c -o o_divide_using_bitwise

./o_divide_using_bitwise

*/
//--------------------------------------------------


