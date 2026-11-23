#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t INTERRUPT_ENABLE_REG = 0;

    constexpr unsigned int TIMER_INTERRUPT = 2;
    constexpr unsigned int UART_INTERRUPT = 5;

    INTERRUPT_ENABLE_REG |= (1U << TIMER_INTERRUPT);
    INTERRUPT_ENABLE_REG |= (1U << UART_INTERRUPT);

    cout << "Interrupt enable register: "
        << bitset<8>(INTERRUPT_ENABLE_REG) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Interrupt enable register: 00100100

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


