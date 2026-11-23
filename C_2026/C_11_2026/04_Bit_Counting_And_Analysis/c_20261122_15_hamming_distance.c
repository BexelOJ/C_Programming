#include <cstdint>
#include <iostream>

// Hamming distance is the number of bit positions that differ.
// XOR produces 1 wherever the corresponding bits are different.
unsigned int hammingDistance(std::uint32_t num1, std::uint32_t num2)
{
    std::uint32_t differingBits = num1 ^ num2;
    unsigned int count = 0;

    while (differingBits != 0)
    {
        differingBits &= (differingBits - 1);
        ++count;
    }

    return count;
}

int main()
{
    const std::uint32_t num1 = 10; // ...00001010
    const std::uint32_t num2 = 15; // ...00001111

    std::cout << "Number 1: " << num1 << '\n';
    std::cout << "Number 2: " << num2 << '\n';
    std::cout << "Hamming distance: "
        << hammingDistance(num1, num2) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number 1: 10
Number 2: 15
Hamming distance: 2

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_15_hamming_distance.cc -o o_hamming_distance

./o_hamming_distance

*/
//--------------------------------------------------


