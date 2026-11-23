#include <cstdint>
#include <iostream>

// Count the number of 1-bits in a 32-bit unsigned integer.
unsigned int countSetBits(std::uint32_t num)
{
    unsigned int count = 0;

    for (unsigned int bit = 0; bit < 32; ++bit)
    {
        if ((num & (std::uint32_t{ 1 } << bit)) != 0)
            ++count;
    }

    return count;
}

int main()
{
    const std::uint32_t num = 22; // Binary: 000...00010110

    std::cout << "Number: " << num << '\n';
    std::cout << "Set bits: " << countSetBits(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Set bits: 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_01_count_set_bits.c -o o_count_set_bits

./o_count_set_bits

*/
//--------------------------------------------------


