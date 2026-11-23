#include <stdio.h>
#include <stdint.h>

uint8_t extract_high_byte(uint16_t num)
{
    return (num >> 8) & 0xFF;
}

uint8_t extract_low_byte(uint16_t num)
{
    return num & 0xFF;
}

int main(void)
{
    uint16_t num = 0xABCD;

    printf("Original: 0x%04X\n", num);
    printf("High byte: 0x%02X\n", extract_high_byte(num));
    printf("Low byte: 0x%02X\n", extract_low_byte(num));

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


