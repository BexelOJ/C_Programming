#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<16> bits("1011001010100101");

    cout << "Bitset: " << bits << '\n';
    cout << "Set bits: " << bits.count() << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Bitset: 1011001010100101
Set bits : 8

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_15_count_set_bits_bitset.c -o o_count_set_bits_bitset

./o_count_set_bits_bitset

*/
//--------------------------------------------------


