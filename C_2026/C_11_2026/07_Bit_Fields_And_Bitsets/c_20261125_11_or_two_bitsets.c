#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> a("11001100");
    bitset<8> b("10101010");

    bitset<8> result = a | b;

    cout << "A  : " << a << '\n';
    cout << "B  : " << b << '\n';
    cout << "OR : " << result << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

A: 11001100
B : 10101010
OR : 11101110

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_11_or_two_bitsets.c -o o_or_two_bitsets

./o_or_two_bitsets

*/
//--------------------------------------------------


