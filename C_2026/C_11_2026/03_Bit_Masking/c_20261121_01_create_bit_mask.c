#include <stdio.h>
#include <stdint.h>

uint32_t create_bit_mask(unsigned int start, unsigned int width)
{
    if (width == 0 || start >= 32 || width > 32 - start)
        return 0;

    uint32_t mask;

    if (width == 32)
        mask = UINT32_MAX;
    else
        mask = (1U << width) - 1U;

    return mask << start;
}

int main(void)
{
    unsigned int start = 4;
    unsigned int width = 4;

    printf("Mask: 0x%08X\n", create_bit_mask(start, width));

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


