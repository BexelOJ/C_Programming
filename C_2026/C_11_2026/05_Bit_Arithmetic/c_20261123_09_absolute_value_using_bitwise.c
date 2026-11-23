
#include <iostream>
#include <cstdint>
#include <cstring>
using namespace std;

uint32_t absoluteValueUsingBits(int32_t num)
{
    uint32_t bits;

    memcpy(&bits, &num, sizeof(bits));

    uint32_t signMask = 0U - (bits >> 31);

    return (bits ^ signMask) + (signMask & 1U);
}

int main()
{
    int32_t num = -25;

    cout << "Absolute value: "
        << absoluteValueUsingBits(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Absolute value: 25

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_09_absolute_value_using_bitwise.c -o o_absolute_value_using_bitwise

./o_absolute_value_using_bitwise

*/
//--------------------------------------------------


