#include <cstdint>
#include <iostream>

// A 4-bit value can contain between 0 and 4 set bits.
// The table stores the population count for values 0 through 15.
unsigned int countSetBitsLookup(std::uint32_t num)
{
    static constexpr unsigned char lookup[16] = {
        0, 1, 1, 2, 1, 2, 2, 3,
        1, 2, 2, 3, 2, 3, 3, 4
    };

    unsigned int count = 0;

    for (unsigned int nibble = 0; nibble < 8; ++nibble)
    {
        count += lookup[num & 0xFU];
        num >>= 4;
    }

    return count;
}

int main()
{
    const std::uint32_t num = 22;

    std::cout << "Number: " << num << '\n';
    std::cout << "Set bits (lookup table): "
        << countSetBitsLookup(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Set bits (lookup table): 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_04_count_bits_lookup_table.c -o o_count_bits_lookup_table

./o_count_bits_lookup_table

*/
//--------------------------------------------------


