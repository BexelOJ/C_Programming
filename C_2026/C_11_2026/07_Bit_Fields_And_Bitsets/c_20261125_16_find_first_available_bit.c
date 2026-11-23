#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<16> bits("1111111111110111");

    cout << "Bitset: " << bits << '\n';

    int position = -1;

    for (int i = 0; i < static_cast<int>(bits.size()); i++)
    {
        if (!bits.test(i))
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "First available bit: " << position << '\n';
    else
        cout << "No available bit found\n";

    return 0;
}


//--------------------------------------------------
/*
Output:

Bitset: 1111111111110111
First available bit : 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_16_find_first_available_bit.c -o o_find_first_available_bit

./o_find_first_available_bit

*/
//--------------------------------------------------


