#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

uint32_t readModifyWrite(
    uint32_t currentValue,
    uint32_t mask,
    uint32_t newValue)
{
    currentValue &= ~mask;
    currentValue |= (newValue & mask);

    return currentValue;
}

int main()
{
    uint32_t CONTROL_REG = 0b10101010;

    constexpr uint32_t FIELD_MASK = 0b00001100;
    constexpr uint32_t NEW_VALUE = 0b00001000;

    cout << "Before: "
        << bitset<8>(CONTROL_REG) << '\n';

    CONTROL_REG = readModifyWrite(
        CONTROL_REG,
        FIELD_MASK,
        NEW_VALUE
    );

    cout << "After:  "
        << bitset<8>(CONTROL_REG) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Before: 10101010
After : 10101010

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


