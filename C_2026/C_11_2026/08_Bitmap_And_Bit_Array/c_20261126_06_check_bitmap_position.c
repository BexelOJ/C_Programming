#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint32_t bitmap = 0x25;

    unsigned int position = 5;

    if (bitmap & (1U << position))
        cout << "Position " << position << " is occupied\n";
    else
        cout << "Position " << position << " is free\n";

    return 0;
}


//--------------------------------------------------
/*
Output:

Position 5 is occupied

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


