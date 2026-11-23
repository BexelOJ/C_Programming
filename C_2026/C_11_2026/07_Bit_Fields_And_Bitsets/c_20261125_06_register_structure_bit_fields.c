#include <iostream>
using namespace std;

struct ControlRegister {
    unsigned int enable : 1;
    unsigned int interrupt : 1;
    unsigned int mode : 2;
    unsigned int reserved : 4;
};

int main()
{
    ControlRegister reg{};

    reg.enable = 1;
    reg.interrupt = 1;
    reg.mode = 2;

    cout << "Enable:    " << reg.enable << '\n';
    cout << "Interrupt: " << reg.interrupt << '\n';
    cout << "Mode:      " << reg.mode << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Enable:    1
Interrupt : 1
Mode : 2

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_06_register_structure_bit_fields.c -o o_register_structure_bit_fields

./o_register_structure_bit_fields

*/
//--------------------------------------------------


