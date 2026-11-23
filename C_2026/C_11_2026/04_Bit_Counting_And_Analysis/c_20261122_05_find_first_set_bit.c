#include <cstdint>
#include <iostream>

// Return the position of the least significant set bit.
// Positions are 1-based: bit 0 is position 1.
// Return -1 when the input is zero.
int firstSetBitPosition(std::uint32_t num)
{
    if (num == 0)
        return -1;

    int position = 1;

    while ((num & 1U) == 0)
    {
        num >>= 1;
        ++position;
    }

    return position;
}

int main()
{
    const std::uint32_t num = 22; // ...00010110

    std::cout << "Number: " << num << '\n';
    std::cout << "First set bit position (from LSB, 1-based): "
        << firstSetBitPosition(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
First set bit position (from LSB, 1-based): 2

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_05_find_first_set_bit.c -o o_find_first_set_bit

./o_find_first_set_bit

*/
//--------------------------------------------------


