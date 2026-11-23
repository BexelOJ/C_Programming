#include <cstdint>
#include <iostream>

// Return the parity bit:
// 0 = even number of set bits
// 1 = odd number of set bits
unsigned int findParity(std::uint32_t num)
{
    unsigned int parity = 0;

    while (num != 0)
    {
        parity ^= 1U;
        num &= (num - 1);
    }

    return parity;
}

int main()
{
    const std::uint32_t num = 22;

    std::cout << "Number: " << num << '\n';
    std::cout << "Parity bit: " << findParity(num) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 22
Parity bit: 1

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_13_find_integer_parity.c -o o_find_integer_parity

./o_find_integer_parity

*/
//--------------------------------------------------


