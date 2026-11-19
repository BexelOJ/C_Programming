
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t unsigned_value = 0xF0;
    int8_t signed_value = -16;

    uint8_t logical_result = unsigned_value >> 2;
    int8_t arithmetic_result = signed_value >> 2;

    printf("Unsigned value         = %u\n", unsigned_value);
    printf("Logical right shift    = %u\n", logical_result);

    printf("Signed value           = %d\n", signed_value);
    printf("Signed right shift     = %d\n", arithmetic_result);

    printf("Signed value     = %d\n", signed_value);

    return 0;
}


//--------------------------------------------------
/*
Output:

Unsigned value         = 240
Logical right shift    = 60
Signed value           = -16
Signed right shift     = -4

//--------------------------------------------------
Logical right shift:
Zero-fill
00111100
Unsigned interpretation: 240 → 60

Arithmetic right shift:
Sign-fill
11111100
Signed interpretation: -16 → -4

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_07_logical_vs_arithmetic_shift.c -o \
o_logical_vs_arithmetic_shift

./and_operator

*/
//--------------------------------------------------


