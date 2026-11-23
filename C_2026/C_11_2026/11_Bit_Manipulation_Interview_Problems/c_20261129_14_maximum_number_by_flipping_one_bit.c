#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int longestOnesAfterOneFlip(uint32_t n)
{
    if (n == UINT32_MAX)
        return 32;

    int current = 0;
    int previous = 0;
    int maximum = 1;

    for (int bit = 0; bit < 32; bit++)
    {
        if (n & (1U << bit))
        {
            current++;
        }
        else
        {
            previous = ((bit < 31) &&
                (n & (1U << (bit + 1))))
                ? current : 0;

            current = 0;
        }

        int candidate = previous + 1 + current;

        if (candidate > maximum)
            maximum = candidate;
    }

    return maximum;
}

int main()
{
    uint32_t n = 0b11011101111;

    cout << "Binary: " << bitset<11>(n) << '\n';

    cout << "Maximum consecutive ones after one flip: "
        << longestOnesAfterOneFlip(n) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Binary: 11011101111
Maximum consecutive ones after one flip : 8

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_14_maximum_number_by_flipping_one_bit.c -o o_maximum_number_by_flipping_one_bit

./o_maximum_number_by_flipping_one_bit

*/
//--------------------------------------------------


