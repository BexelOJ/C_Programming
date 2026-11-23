#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    // Simulated hardware status register
    uint32_t STATUS_REG = 0b00000101;

    constexpr uint32_t READY_BIT = (1U << 0);
    constexpr uint32_t ERROR_BIT = (1U << 2);

    cout << "Status register: "
        << bitset<8>(STATUS_REG) << '\n';

    if (STATUS_REG & READY_BIT)
        cout << "Device is ready\n";

    if (STATUS_REG & ERROR_BIT)
        cout << "Device error detected\n";

    return 0;
}


//--------------------------------------------------
/*
Output:

Status register: 00000101
Device is ready
Device error detected

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


