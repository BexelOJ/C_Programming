#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    // Simulated pending register
    uint32_t pendingRegister = 0b00001101;

    constexpr uint32_t TIMER_PENDING = (1U << 2);

    cout << "Before clear: "
        << bitset<8>(pendingRegister) << '\n';

    // Simulate the hardware's W1C behaviour
    uint32_t writeValue = TIMER_PENDING;

    pendingRegister &= ~writeValue;

    cout << "After clear:  "
        << bitset<8>(pendingRegister) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Before clear : 00001101
After clear : 00001001

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_05_clear_interrupt_pending_bits.c -o o_clear_interrupt_pending_bits

./o_clear_interrupt_pending_bits

*/
//--------------------------------------------------


