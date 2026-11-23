#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<16> bits(0x0028);

    cout << "Bitset: " << bits << '\n';

    cout << "Bit 3: " << bits.test(3) << '\n';
    cout << "Bit 5: " << bits.test(5) << '\n';
    cout << "Bit 4: " << bits.test(4) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Bitset: 0000000000101000
Bit 3 : 1
Bit 5 : 1
Bit 4 : 0

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_09_check_bits_bitset.c -o o_check_bits_bitset

./o_check_bits_bitset

*/
//--------------------------------------------------


