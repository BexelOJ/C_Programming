#include <stdio.h>
#include <stdint.h>

uint32_t combine_16bit(uint16_t high, uint16_t low)
{
    return ((uint32_t)high << 16) | low;
}

int main(void)
{
    uint16_t high = 0x1234;
    uint16_t low = 0x5678;

    uint32_t result = combine_16bit(high, low);

    printf("Combined value: 0x%08X\n", result);

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


