#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint32_t bitmap = 0x28;

    int position = -1;

    for (int i = 0; i < 32; i++)
    {
        if (bitmap & (1U << i))
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "First occupied bit: " << position << '\n';
    else
        cout << "No occupied bit found\n";

    return 0;
}


//--------------------------------------------------
/*
Output:

First occupied bit : 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261126_08_find_first_occupied_bit.c -o o_find_first_occupied_bit

./o_find_first_occupied_bit

*/
//--------------------------------------------------


