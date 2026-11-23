#include <stdio.h>
#include <stdint.h>

uint8_t extract_upper_nibble(uint8_t num)
{
    return (num >> 4) & 0x0F;
}

uint8_t extract_lower_nibble(uint8_t num)
{
    return num & 0x0F;
}

int main(void)
{
    uint8_t num = 0xAB;

    printf("Original: 0x%02X\n", num);
    printf("Upper nibble: 0x%X\n", extract_upper_nibble(num));
    printf("Lower nibble: 0x%X\n", extract_lower_nibble(num));

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


