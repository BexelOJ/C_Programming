#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t bitmap = 0x0F;

    unsigned int position = 2;

    bitmap ^= (1U << position);

    cout << "Bitmap: " << bitset<32>(bitmap) << '\n';

    return 0;
}


Bitmap: 00000000000000000000000000001011

//--------------------------------------------------
/*
Output:

Number: 16
Set bit position: 5

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


