#include <stdio.h>
#include <stdint.h>

uint16_t combine_8bit(uint8_t high, uint8_t low)
{
    return ((uint16_t)high << 8) | low;
}

int main(void)
{
    uint8_t high = 0xAB;
    uint8_t low = 0xCD;

    uint16_t result = combine_8bit(high, low);

    printf("Combined value: 0x%04X\n", result);

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


