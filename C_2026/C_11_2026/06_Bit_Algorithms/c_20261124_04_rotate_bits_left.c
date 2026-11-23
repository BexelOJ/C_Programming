
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t rotateLeft(uint32_t num, unsigned int positions)
{
    positions %= 32;

    if (positions == 0)
        return num;

    return (num << positions) |
        (num >> (32 - positions));
}

int main()
{
    uint32_t num = 13;

    cout << "Original: " << num << endl;

    cout << "Rotate left by 2: "
        << rotateLeft(num, 2) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 13
Rotate left by 2: 52

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_04_rotate_bits_left.c -o o_rotate_bits_left

./o_rotate_bits_left

*/
//--------------------------------------------------


