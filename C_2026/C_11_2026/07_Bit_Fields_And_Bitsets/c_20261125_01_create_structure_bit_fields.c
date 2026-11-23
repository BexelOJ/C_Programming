#include <iostream>
using namespace std;

struct DeviceStatus {
    unsigned int ready : 1;
    unsigned int error : 1;
    unsigned int mode : 2;
};

int main()
{
    DeviceStatus status{ 1, 0, 2 };

    cout << "Ready: " << status.ready << '\n';
    cout << "Error: " << status.error << '\n';
    cout << "Mode:  " << status.mode << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Ready: 1
Error : 0
Mode : 2

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_01_create_structure_bit_fields.c -o o_create_structure_bit_fields

./o_create_structure_bit_fields

*/
//--------------------------------------------------


