#include <cstdint>
#include <iostream>

// Hamming weight (population count) is the number of set bits.
unsigned int hammingWeight(std::uint32_t num)
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
    std::cout << "Hamming weight: " << hammingWeight(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Hamming weight: 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_14_calculate_hamming_weight.c -o o_calculate_hamming_weight

./o_calculate_hamming_weight

*/
//--------------------------------------------------


