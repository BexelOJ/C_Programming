#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t binary = 10;

    uint32_t gray = binary ^ (binary >> 1);

    cout << "Binary: " << bitset<8>(binary) << '\n';
    cout << "Gray:   " << bitset<8>(gray) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Binary: 00001010
Gray : 00001111

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


