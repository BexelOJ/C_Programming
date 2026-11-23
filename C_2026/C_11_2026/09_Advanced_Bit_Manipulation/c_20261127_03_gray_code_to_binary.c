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
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


