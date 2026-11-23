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
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


