#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t CONFIG_REG = 0;

    constexpr uint32_t ENABLE_MASK = 0x01U;
    constexpr uint32_t MODE_MASK = 0x06U;
    constexpr uint32_t CLOCK_MASK = 0x30U;

    // Enable peripheral
    CONFIG_REG |= ENABLE_MASK;

    // Configure mode = 2
    CONFIG_REG &= ~MODE_MASK;
    CONFIG_REG |= (2U << 1);

    // Configure clock divider = 3
    CONFIG_REG &= ~CLOCK_MASK;
    CONFIG_REG |= (3U << 4);

    cout << "Configuration register: "
        << bitset<8>(CONFIG_REG) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Configuration register: 00110101

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


