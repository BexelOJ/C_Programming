#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    // Simulated hardware register
    volatile uint32_t STATUS_REG = 0;

    // Write to register
    STATUS_REG = 0x05;

    // Read register
    uint32_t value = STATUS_REG;

    cout << "Status register: "
        << value << '\n';

    // Set bit 2
    STATUS_REG = STATUS_REG | (1U << 2);

    cout << "After setting bit 2: "
        << STATUS_REG << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Status register: 5
After setting bit 2 : 5

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_13_volatile_register_access.c -o o_volatile_register_access

./o_volatile_register_access

*/
//--------------------------------------------------


