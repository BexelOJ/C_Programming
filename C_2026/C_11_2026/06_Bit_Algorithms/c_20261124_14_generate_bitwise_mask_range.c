
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t generateMask(unsigned int left, unsigned int right)
{
    if (left > right || right >= 32)
        return 0;

    unsigned int width = right - left + 1;

    uint32_t mask;

    if (width == 32)
        mask = 0xFFFFFFFFU;
    else
        mask = (1U << width) - 1U;

    return mask << left;
}

int main()
{
    unsigned int left = 2;
    unsigned int right = 5;

    cout << hex;

    cout << "Mask: 0x"
        << generateMask(left, right) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Mask: 0x3c

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_14_generate_bitwise_mask_range.c -o o_generate_bitwise_mask_range

./o_generate_bitwise_mask_range

*/
//--------------------------------------------------


