#include <stdio.h>
#include <stdint.h>

uint32_t insert_bit_field(uint32_t num,
    uint32_t value,
    unsigned int start,
    unsigned int width)
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
    uint32_t value = 5;

    printf("Original: 0x%X\n", num);

    num = insert_bit_field(num, value, 2, 3);

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
c_20261120_12_clear_except_selected_bit.c -o o_clear_except_selected_bit

./o_clear_except_selected_bit

*/
//--------------------------------------------------


