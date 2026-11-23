#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t bitmap = 0;

    unsigned int start = 4;
    unsigned int length = 4;

    uint32_t mask = ((1U << length) - 1U) << start;

    if ((bitmap & mask) == 0)
    {
        bitmap |= mask;
        cout << "Range allocated\n";
    }
    else
    {
        cout << "Range is not free\n";
    }

    cout << "Bitmap: " << bitset<32>(bitmap) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Range allocated
Bitmap : 00000000000000000000000011110000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


