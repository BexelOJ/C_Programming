#include <stdio.h>
#include <stdint.h>

uint32_t update_bit(uint32_t num,
    unsigned int pos,
    unsigned int value)
{
    if (pos >= 32 || value > 1)
        return num;

    uint32_t mask = 1U << pos;

    num &= ~mask;

    if (value == 1)
        num |= mask;

    return num;
}

int main(void)
{
    uint32_t num = 10;

    printf("Original: %u\n", num);
    printf("Updated: %u\n", update_bit(num, 0, 1));

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 10
Updated: 11

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_08_update_bit.c -o o_update_bit

./o_update_bit

*/
//--------------------------------------------------


