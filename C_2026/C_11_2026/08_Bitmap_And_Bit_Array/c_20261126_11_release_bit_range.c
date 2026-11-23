#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t bitmap = 0xF0;

    unsigned int start = 4;
    unsigned int length = 4;

    uint32_t mask = ((1U << length) - 1U) << start;

    bitmap &= ~mask;

    cout << "Bitmap: " << bitset<32>(bitmap) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Bitmap: 00000000000000000000000000000000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261126_11_release_bit_range.c -o o_release_bit_range

./o_release_bit_range

*/
//--------------------------------------------------


