#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t num = 5;
    uint32_t widthMask = 0x0F;

    cout << "Supermasks of " << bitset<4>(num) << ":\n";

    for (uint32_t mask = 0; mask <= widthMask; mask++)
    {
        if ((mask & num) == num)
            cout << bitset<4>(mask) << '\n';
    }

    return 0;
}


//--------------------------------------------------
/*
Output:

Supermasks of 0101:
0101
0111
1101
1111

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


