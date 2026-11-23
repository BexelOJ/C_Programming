include <cstdint>
#include <iostream>

// Each iteration clears the least significant set bit.
unsigned int countSetBitsKernighan(std::uint32_t num)
{
    unsigned int count = 0;

    while (num != 0)
    {
        num &= (num - 1);
        ++count;
    }

    return count;
}

int main()
{
    const std::uint32_t num = 22;

    std::cout << "Number: " << num << '\n';
    std::cout << "Set bits (Brian Kernighan): "
        << countSetBitsKernighan(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Set bits (Brian Kernighan): 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_03_count_bits_brian_kernighan.c -o o_count_bits_brian_kernighan

./o_count_bits_brian_kernighan

*/
//--------------------------------------------------


