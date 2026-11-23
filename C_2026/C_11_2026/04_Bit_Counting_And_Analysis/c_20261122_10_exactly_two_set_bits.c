#include <cstdint>
#include <iostream>

// Count set bits using Brian Kernighan's method, stopping after 3.
// Exactly two set bits means the count finishes at 2.
bool hasExactlyTwoSetBits(std::uint32_t num)
{
    unsigned int count = 0;

    while (num != 0)
    {
        num &= (num - 1);
        ++count;

        if (count > 2)
            return false;
    }

    return count == 2;
}

int main()
{
    const std::uint32_t num = 10; // Binary: ...00001010

    std::cout << "Number: " << num << '\n';
    std::cout << "Has exactly two set bits: "
        << (hasExactlyTwoSetBits(num) ? "Yes" : "No") << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 10
Has exactly two set bits: Yes

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_10_exactly_two_set_bits.c -o o_exactly_two_set_bits

./o_exactly_two_set_bits

*/
//--------------------------------------------------


