#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> a("11001100");
    bitset<8> b("10101010");

    bitset<8> unionSet = a | b;
    bitset<8> intersectionSet = a & b;

    cout << "A:            " << a << '\n';
    cout << "B:            " << b << '\n';
    cout << "Union:        " << unionSet << '\n';
    cout << "Intersection: " << intersectionSet << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

A:            11001100
B : 10101010
Union : 11101110
Intersection : 10001000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_14_union_intersection_bitsets.c -o o_union_intersection_bitsets

./o_union_intersection_bitsets

*/
//--------------------------------------------------


