#include <iostream>
using namespace std;

struct Configuration {
    unsigned int mode : 3;
    unsigned int level : 4;
};

int main()
{
    Configuration config{ 5, 12 };

    cout << "Mode: " << config.mode << '\n';
    cout << "Level: " << config.level << '\n';

    config.mode = 7;

    cout << "Updated mode: " << config.mode << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Mode: 5
Level : 12
Updated mode : 7

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_02_declare_unsigned_bit_fields.c -o o_declare_unsigned_bit_fields

./o_declare_unsigned_bit_fields

*/
//--------------------------------------------------


