#include <iostream>
using namespace std;

struct SensorData {
    signed int temperature : 7;
};

int main()
{
    SensorData sensor{};

    sensor.temperature = -10;

    cout << "Temperature: "
        << sensor.temperature << '\n';

    sensor.temperature = 25;

    cout << "Updated temperature: "
        << sensor.temperature << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Temperature: -10
Updated temperature : 25

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261125_03_declare_signed_bit_fields.c -o o_declare_signed_bit_fields

./o_declare_signed_bit_fields

*/
//--------------------------------------------------


