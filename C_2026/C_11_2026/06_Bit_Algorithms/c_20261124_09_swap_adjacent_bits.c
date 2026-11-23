
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t swapAdjacentBits(uint32_t num)
{
    uint32_t evenBits = num & 0x55555555U;
    uint32_t oddBits = num & 0xAAAAAAAAU;

    return (evenBits << 1) | (oddBits >> 1);
}

int main()
{
    uint32_t num = 10;

    cout << "Original: " << num << endl;

    cout << "After swapping adjacent bits: "
        << swapAdjacentBits(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 10
After swapping adjacent bits: 5

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_09_swap_adjacent_bits.c -o o_swap_adjacent_bits

./o_swap_adjacent_bits

*/
//--------------------------------------------------


