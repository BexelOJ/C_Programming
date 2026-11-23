#include <iostream>
using namespace std;

struct Control {
    unsigned int enable : 1;
    unsigned int mode : 2;
    unsigned int speed : 3;
};

int main()
{
    Control device{ 0, 0, 0 };

    // Modify bit fields
    device.enable = 1;
    device.mode = 2;
    device.speed = 5;

    // Access bit fields
    cout << "Enable: " << device.enable << '\n';
    cout << "Mode:   " << device.mode << '\n';
    cout << "Speed:  " << device.speed << '\n';

    // Modify an existing field
    device.mode = 1;

    cout << "Updated mode: " << device.mode << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Enable: 1
Mode : 2
Speed : 5
Updated mode : 1

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_04_access_modify_bit_fields.c -o o_access_modify_bit_fields

./o_access_modify_bit_fields

*/
//--------------------------------------------------


