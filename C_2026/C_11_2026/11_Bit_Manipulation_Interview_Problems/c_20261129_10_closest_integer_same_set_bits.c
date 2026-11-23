#include <iostream>
#include <cstdint>
#include <limits>
using namespace std;

uint32_t nextSameBits(uint32_t n)
{
    uint32_t c = n;
    unsigned int zeros = 0;
    unsigned int ones = 0;

    while ((c & 1U) == 0 && c != 0)
    {
        zeros++;
        c >>= 1;
    }

    while (c & 1U)
    {
        ones++;
        c >>= 1;
    }

    if (zeros + ones == 32 || ones == 0)
        return 0;

    unsigned int position = zeros + ones;

    n |= (1U << position);
    n &= ~((1U << position) - 1U);

    n |= (1U << (ones - 1)) - 1U;

    return n;
}

uint32_t previousSameBits(uint32_t n)
{
    unsigned int ones = 0;
    unsigned int zeros = 0;

    uint32_t c = n;

    while (c & 1U)
    {
        ones++;
        c >>= 1;
    }

    while ((c & 1U) == 0 && c != 0)
    {
        zeros++;
        c >>= 1;
    }

    if (ones == 0 || zeros + ones == 32)
        return 0;

    unsigned int position = zeros + ones;

    n &= ~((1U << (position + 1)) - 1U);

    uint32_t mask = (1U << (ones + 1)) - 1U;

    n |= mask << (zeros - 1);

    return n;
}

int main()
{
    uint32_t n = 6;

    uint32_t next = nextSameBits(n);
    uint32_t previous = previousSameBits(n);

    cout << "Original: " << n << '\n';
    cout << "Previous: " << previous << '\n';
    cout << "Next: " << next << '\n';

    if (previous == 0)
        cout << "Closest: " << next << '\n';
    else if (next == 0)
        cout << "Closest: " << previous << '\n';
    else if (n - previous <= next - n)
        cout << "Closest: " << previous << '\n';
    else
        cout << "Closest: " << next << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 6
Previous : 5
Next : 9
Closest : 5

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_10_closest_integer_same_set_bits.c -o o_c_20261129_10_closest_integer_same_set_bits

./o_c_20261129_10_closest_integer_same_set_bits

*/
//--------------------------------------------------


