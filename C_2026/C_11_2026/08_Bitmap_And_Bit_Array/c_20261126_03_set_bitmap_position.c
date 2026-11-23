#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t bitmap = 0;

    unsigned int position = 5;

    bitmap |= (1U << position);

    cout << "Bitmap: " << bitset<32>(bitmap) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Bitmap: 00000000000000000000000000100000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261126_03_set_bitmap_position.c -o o_set_bitmap_position

./o_set_bitmap_position

*/
//--------------------------------------------------


