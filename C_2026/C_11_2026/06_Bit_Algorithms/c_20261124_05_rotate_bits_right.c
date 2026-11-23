
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t rotateRight(uint32_t num, unsigned int positions)
{
    positions %= 32;

    if (positions == 0)
        return num;

    return (num >> positions) |
        (num << (32 - positions));
}

int main()
{
    uint32_t num = 13;

    cout << "Original: " << num << endl;

    cout << "Rotate right by 2: "
        << rotateRight(num, 2) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 13
Rotate right by 2: 1073741827

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_05_rotate_bits_right.c -o o_rotate_bits_right

./o_rotate_bits_right

*/
//--------------------------------------------------


