#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<16> bits;

    // Set bit at position 3
    bits.set(3);
    cout << "After set:    " << bits << '\n';

    // Clear bit at position 3
    bits.reset(3);
    cout << "After clear:  " << bits << '\n';

    // Toggle bit at position 5
    bits.flip(5);
    cout << "After toggle: " << bits << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

After set : 0000000000001000
After clear : 0000000000000000
After toggle : 0000000000100000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_08_set_clear_toggle_bitset.c -o o_set_clear_toggle_bitset

./o_set_clear_toggle_bitset

*/
//--------------------------------------------------


