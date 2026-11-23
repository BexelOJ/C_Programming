
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t reverseBits(uint32_t num)
{
    uint32_t result = 0;

    for (int i = 0; i < 32; i++)
    {
        result <<= 1;
        result |= (num & 1U);

        num >>= 1;
    }

    return result;
}

int main()
{
    uint32_t num = 13;

    cout << "Original: " << num << endl;
    cout << "Reversed: " << reverseBits(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 13
Reversed: 2952790016

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_02_reverse_all_bits.c -o o_reverse_all_bits

./o_reverse_all_bits

*/
//--------------------------------------------------


