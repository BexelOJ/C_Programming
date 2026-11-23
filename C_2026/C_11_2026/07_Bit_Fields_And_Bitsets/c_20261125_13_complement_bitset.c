#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> bits("11001010");

    bitset<8> result = ~bits;

    cout << "Original:    " << bits << '\n';
    cout << "Complement: " << result << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Original:    11001010
Complement : 00110101

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_13_complement_bitset.c -o o_complement_bitset

./o_complement_bitset

*/
//--------------------------------------------------


