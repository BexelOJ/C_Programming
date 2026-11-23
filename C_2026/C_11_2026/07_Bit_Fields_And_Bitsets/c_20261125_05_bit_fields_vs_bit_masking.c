#include <iostream>
#include <cstdint>
using namespace std;

struct Device {
    unsigned int enable : 1;
    unsigned int mode : 2;
};

int main()
{
    Device device{ 1, 2 };

    uint32_t registerValue = 0x05;

    // Access using bit fields
    cout << "Bit-field enable: " << device.enable << '\n';
    cout << "Bit-field mode:   " << device.mode << '\n';

    // Access using bit masking
    uint32_t enable = registerValue & 0x01U;
    uint32_t mode = (registerValue >> 1) & 0x03U;

    cout << "Masked enable: " << enable << '\n';
    cout << "Masked mode:   " << mode << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Bit - field enable : 1
Bit - field mode : 2
Masked enable : 1
Masked mode : 2

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_05_bit_fields_vs_bit_masking.c -o o_bit_fields_vs_bit_masking

./o_bit_fields_vs_bit_masking

*/
//--------------------------------------------------


