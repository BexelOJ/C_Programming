#include <cstdint>
#include <iostream>

// A nonzero power of two has exactly one set bit.
// n & (n - 1) clears the least significant set bit.
bool hasExactlyOneSetBit(std::uint32_t num)
{
    return (num != 0) && ((num & (num - 1)) == 0);
}

int main()
{
    const std::uint32_t num = 16;

    std::cout << "Number: " << num << '\n';
    std::cout << "Has exactly one set bit: "
        << (hasExactlyOneSetBit(num) ? "Yes" : "No") << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 16
Has exactly one set bit: Yes

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261122_09_exactly_one_set_bit.c -o o_exactly_one_set_bit

./o_exactly_one_set_bit

*/
//--------------------------------------------------


