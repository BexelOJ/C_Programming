#include <stdio.h>
#include <stdint.h>

unsigned int extract_bit(uint32_t num, unsigned int pos)
{
    if (pos >= 32)
        return 0;

    return (num >> pos) & 1U;
}

int main(void)
{
    uint32_t num = 10;
    unsigned int pos = 3;

    printf("Number: %u\n", num);
    printf("Extracted bit: %u\n", extract_bit(num, pos));

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


