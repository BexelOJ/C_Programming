#include <cstdint>
#include <iostream>

// Return a descriptive parity result.
// Even parity: the number of set bits is even.
// Odd parity: the number of set bits is odd.
const char* evenOddParity(std::uint32_t num)
{
    unsigned int parity = 0;

    while (num != 0)
    {
        parity ^= 1U;
        num &= (num - 1);
    }

    return (parity == 0) ? "Even parity" : "Odd parity";
}

int main()
{
    const std::uint32_t num = 22; // Three set bits

    std::cout << "Number: " << num << '\n';
    std::cout << "Parity: " << evenOddParity(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Parity: Odd parity

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_12_calculate_even_odd_parity.c -o o_calculate_even_odd_parity

./o_calculate_even_odd_parity

*/
//--------------------------------------------------


