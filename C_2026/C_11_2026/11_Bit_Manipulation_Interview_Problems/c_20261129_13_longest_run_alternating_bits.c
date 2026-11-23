#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int longestAlternatingBits(uint32_t n)
{
    if (n == 0)
        return 0;

    uint32_t significantMask = UINT32_MAX;

    unsigned int width = 0;
    uint32_t temp = n;

    while (temp)
    {
        width++;
        temp >>= 1;
    }

    if (width < 32)
        significantMask = (1U << width) - 1U;

    uint32_t changes = (n ^ (n >> 1)) & significantMask;

    int count = 0;

    while (changes)
    {
        changes &= (changes << 1);
        count++;
    }

    return count + 1;
}

int main()
{
    uint32_t n = 0b01010101;

    cout << "Binary: " << bitset<8>(n) << '\n';

    cout << "Longest alternating run: "
        << longestAlternatingBits(n) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Binary: 01010101
Longest alternating run : 8

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_13_longest_run_alternating_bits.c -o o_longest_run_alternating_bits

./o_longest_run_alternating_bits

*/
//--------------------------------------------------


