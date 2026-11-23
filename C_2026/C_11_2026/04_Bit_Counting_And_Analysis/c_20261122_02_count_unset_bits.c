#include <cstdint>
#include <iostream>

// Count 0-bits across the complete 32-bit representation.
unsigned int countUnsetBits(std::uint32_t num)
{
    unsigned int count = 0;

    for (unsigned int bit = 0; bit < 32; ++bit)
    {
        if ((num & (std::uint32_t{ 1 } << bit)) == 0)
            ++count;
    }

    return count;
}

int main()
{
    const std::uint32_t num = 22;

    std::cout << "Number: " << num << '\n';
    std::cout << "Unset bits (32-bit representation): "
        << countUnsetBits(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Unset bits (32-bit representation): 29

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_02_count_unset_bits.c -o o_count_unset_bits

./o_count_unset_bits

*/
//--------------------------------------------------


