#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t GPIO_MODE_REG = 0;

    constexpr unsigned int PIN = 2;
    constexpr unsigned int WIDTH = 2;

    constexpr uint32_t MASK =
        ((1U << WIDTH) - 1U) << (PIN * WIDTH);

    constexpr uint32_t OUTPUT_MODE = 1U;

    // Clear the selected pin's configuration
    GPIO_MODE_REG &= ~MASK;

    // Set the selected pin to output
    GPIO_MODE_REG |= (OUTPUT_MODE << (PIN * WIDTH));

    cout << "GPIO mode register: "
        << bitset<8>(GPIO_MODE_REG) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

GPIO mode register: 00010000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_03_update_gpio_configuration_bits.c -o o_update_gpio_configuration_bits

./o_update_gpio_configuration_bits

*/
//--------------------------------------------------


