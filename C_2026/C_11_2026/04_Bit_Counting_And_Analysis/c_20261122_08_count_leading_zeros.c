#include <cstdint>
#include <iostream>

// Count consecutive zero bits starting at bit 31 (the MSB).
// For a 32-bit input of zero, the answer is 32.
unsigned int countLeadingZeros(std::uint32_t num)
{
    if (num == 0)
        return 32;

    unsigned int count = 0;
    const std::uint32_t msbMask = std::uint32_t{ 1 } << 31;

    while ((num & msbMask) == 0)
    {
        ++count;
        num <<= 1;
    }

    return count;
}

int main()
{
    const std::uint32_t num = 22;

    std::cout << "Number: " << num << '\n';
    std::cout << "Leading zeros (32-bit representation): "
        << countLeadingZeros(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Leading zeros (32-bit representation): 27

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_08_count_leading_zeros.c -o o_count_leading_zeros

./o_count_leading_zeros

*/
//--------------------------------------------------


