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
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


