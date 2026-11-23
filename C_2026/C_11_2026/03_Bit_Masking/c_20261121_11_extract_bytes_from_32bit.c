#include <stdio.h>
#include <stdint.h>

uint8_t extract_byte(uint32_t num, unsigned int pos)
{
    if (pos >= 4)
        return 0;

    return (num >> (pos * 8)) & 0xFF;
}

int main(void)
{
    uint32_t num = 0x12345678;

    printf("Original: 0x%08X\n", num);

    for (unsigned int i = 0; i < 4; i++)
    {
        printf("Byte %u: 0x%02X\n", i, extract_byte(num, i));
    }

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


