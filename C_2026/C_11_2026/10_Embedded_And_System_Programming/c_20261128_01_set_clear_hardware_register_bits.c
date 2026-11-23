#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t CONTROL_REG = 0;

    // Set bit 3
    CONTROL_REG |= (1U << 3);

    cout << "After setting bit 3: "
        << bitset<8>(CONTROL_REG) << '\n';

    // Clear bit 3
    CONTROL_REG &= ~(1U << 3);

    cout << "After clearing bit 3: "
        << bitset<8>(CONTROL_REG) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

After setting bit 3: 00001000
After clearing bit 3 : 00000000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_01_set_clear_hardware_register_bits.c -o o_set_clear_hardware_register_bits

./o_set_clear_hardware_register_bits

*/
//--------------------------------------------------


