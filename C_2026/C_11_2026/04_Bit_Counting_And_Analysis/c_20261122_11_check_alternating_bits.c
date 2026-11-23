#include <cstdint>
#include <iostream>

// Alternating bits means adjacent bits differ: ...1010 or ...0101.
// This implementation considers 0 alternating (there are no equal
// adjacent bits); change the zero case if your problem defines otherwise.
bool hasAlternatingBits(std::uint32_t num)
{
    const std::uint32_t adjacentXor = num ^ (num >> 1);

    // A value containing only consecutive 1s has the form 00...0011...11.
    return (adjacentXor & (adjacentXor + 1U)) == 0;
}

int main()
{
    const std::uint32_t num = 10; // Binary: ...00001010

    std::cout << "Number: " << num << '\n';
    std::cout << "Has alternating bits: "
        << (hasAlternatingBits(num) ? "Yes" : "No") << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 10
Has alternating bits: Yes

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_11_check_alternating_bits.c -o o_check_alternating_bits

./o_check_alternating_bits

*/
//--------------------------------------------------


