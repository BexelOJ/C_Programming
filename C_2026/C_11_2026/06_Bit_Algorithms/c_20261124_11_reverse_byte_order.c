
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t reverseBytes(uint32_t num)
{
    return ((num & 0x000000FFU) << 24) |
        ((num & 0x0000FF00U) << 8) |
        ((num & 0x00FF0000U) >> 8) |
        ((num & 0xFF000000U) >> 24);
}

int main()
{
    uint32_t num = 0x12345678;

    cout << hex;

    cout << "Original: 0x" << num << endl;

    cout << "Reversed: 0x"
        << reverseBytes(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 0x12345678
Reversed: 0x78563412

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_11_reverse_byte_order.c -o o_reverse_byte_order

./o_reverse_byte_order

*/
//--------------------------------------------------


