#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint32_t bitmap = 0x0F;

    int position = -1;

    for (int i = 0; i < 32; i++)
    {
        if ((bitmap & (1U << i)) == 0)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "First free bit: " << position << '\n';
    else
        cout << "No free bit found\n";

    return 0;
}


//--------------------------------------------------
/*
Output:

First free bit : 4

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


