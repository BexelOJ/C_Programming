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
c_20261127_02_binary_to_gray_code.c -o o_binary_to_gray_code

./o_binary_to_gray_code

*/
//--------------------------------------------------


