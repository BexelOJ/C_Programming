#include <cstdint>
#include <iostream>

// Return the position of the most significant set bit.
// Positions are 1-based: bit 0 is position 1.
// Return -1 when the input is zero.
int lastSetBitPosition(std::uint32_t num)
{
    if (num == 0)
        return -1;

    int position = 0;

    while (num != 0)
    {
        ++position;
        num >>= 1;
    }

    return position;
}

int main()
{
    const std::uint32_t num = 22; // ...00010110

    std::cout << "Number: " << num << '\n';
    std::cout << "Last set bit position (from LSB, 1-based): "
        << lastSetBitPosition(num) << '\n';

    return 0;
}

// Expected output:
// Number: 22
// Last set bit position (from LSB, 1-based): 5


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_12_clear_except_selected_bit.c -o o_clear_except_selected_bit

./o_clear_except_selected_bit

*/
//--------------------------------------------------


