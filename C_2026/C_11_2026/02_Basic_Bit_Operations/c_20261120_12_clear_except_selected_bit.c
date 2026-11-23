#include <stdio.h>
#include <stdint.h>

uint32_t keep_only_bit(uint32_t num, unsigned int pos)
{
    return num & (1U << pos);
}

int main(void)
{
    uint32_t num = 10;
    unsigned int pos = 3;

    printf("Original: %u\n", num);
    printf("Result: %u\n", keep_only_bit(num, pos));

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


