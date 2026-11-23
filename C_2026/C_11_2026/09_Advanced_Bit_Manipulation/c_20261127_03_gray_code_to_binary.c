#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

uint32_t grayToBinary(uint32_t gray)
{
    uint32_t binary = gray;

    while (gray >>= 1)
        binary ^= gray;

    return binary;
}

int main()
{
    uint32_t gray = 15;

    uint32_t binary = grayToBinary(gray);

    cout << "Gray:   " << bitset<8>(gray) << '\n';
    cout << "Binary: " << bitset<8>(binary) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Gray:   00001111
Binary : 00001010

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261127_03_gray_code_to_binary.c -o o_gray_code_to_binary

./o_gray_code_to_binary

*/
//--------------------------------------------------


