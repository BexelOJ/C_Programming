#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<16> bits(0x00A5);

    cout << "Bitset: " << bits << '\n';
    cout << "Size:   " << bits.size() << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Bitset: 0000000010100101
Size : 16

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_07_fixed_size_bitset.c -o o_fixed_size_bitset

./o_fixed_size_bitset

*/
//--------------------------------------------------


