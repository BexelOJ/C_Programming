#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t bitmap[2] = { 0 };

    // Set position 5
    bitmap[5 / 32] |= (1U << (5 % 32));

    // Set position 40
    bitmap[40 / 32] |= (1U << (40 % 32));

    cout << "Word 0: " << bitset<32>(bitmap[0]) << '\n';
    cout << "Word 1: " << bitset<32>(bitmap[1]) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Word 0: 00000000000000000000000000100000
Word 1 : 00000000000000000000000100000000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


