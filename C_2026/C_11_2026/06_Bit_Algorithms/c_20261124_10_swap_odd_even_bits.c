
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t swapOddEvenBits(uint32_t num)
{
    uint32_t evenPositionBits = num & 0x55555555U;
    uint32_t oddPositionBits = num & 0xAAAAAAAAU;

    return (evenPositionBits << 1) |
        (oddPositionBits >> 1);
}

int main()
{
    uint32_t num = 12;

    cout << "Original: " << num << endl;

    cout << "After swapping odd/even positions: "
        << swapOddEvenBits(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 12
After swapping odd/even positions: 12

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_10_swap_odd_even_bits.c -o o_swap_odd_even_bits

./o_swap_odd_even_bits

*/
//--------------------------------------------------


