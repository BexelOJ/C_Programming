#include <iostream>
#include <cstdint>
using namespace std;

uint32_t largestPowerOfTwo(uint32_t n)
{
    if (n == 0)
        return 0;

    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;

    return n - (n >> 1);
}

int main()
{
    uint32_t n = 70;

    cout << "Number: " << n << '\n';

    cout << "Largest power of two: "
        << largestPowerOfTwo(n) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 70
Largest power of two : 64

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_11_largest_power_of_two_less_than_or_equal_n.c -o o_largest_power_of_two_less_than_or_equal_n

./o_largest_power_of_two_less_than_or_equal_n

*/
//--------------------------------------------------


