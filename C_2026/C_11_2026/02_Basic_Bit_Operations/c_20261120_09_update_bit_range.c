#include <stdio.h>
#include <stdint.h>

uint32_t update_bit_range(uint32_t num,
    unsigned int start,
    unsigned int width,
    uint32_t value)
{
    if (width == 0 || start >= 32 || width > 32 - start)
        return num;

    uint32_t field_mask;

    if (width == 32)
        field_mask = UINT32_MAX;
    else
        field_mask = (1U << width) - 1U;

    uint32_t mask = field_mask << start;

    num &= ~mask;

    num |= (value & field_mask) << start;

    return num;
}

int main(void)
{
    uint32_t num = 0xA0;

    printf("Original: 0x%X\n", num);

    num = update_bit_range(num, 2, 3, 5);

    printf("Updated: 0x%X\n", num);

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_09_update_bit_range.c -o o_update_bit_range

./o_update_bit_range

*/
//--------------------------------------------------


