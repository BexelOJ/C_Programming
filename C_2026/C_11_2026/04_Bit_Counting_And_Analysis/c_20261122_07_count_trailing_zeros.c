#include <cstdint>
#include <iostream>

// Count consecutive zero bits starting at the least significant bit.
// For a 32-bit input of zero, the answer is 32.
unsigned int countTrailingZeros(std::uint32_t num)
{
    if (num == 0)
        return 32;

    unsigned int count = 0;

    while ((num & 1U) == 0)
    {
        ++count;
        num >>= 1;
    }

    return count;
}

int main()
{
    const std::uint32_t num = 40; // Binary: ...00101000

    std::cout << "Number: " << num << '\n';
    std::cout << "Trailing zeros: " << countTrailingZeros(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 40
Trailing zeros: 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_07_count_trailing_zeros.c -o o_count_trailing_zeros

./o_count_trailing_zeros

*/
//--------------------------------------------------


