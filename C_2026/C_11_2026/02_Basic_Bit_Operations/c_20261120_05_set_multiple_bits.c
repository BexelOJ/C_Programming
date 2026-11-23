#include <stdio.h>
#include <stdint.h>

uint32_t set_multiple_bits(uint32_t num, uint32_t mask)
{
    return num | mask;
}

int main(void)
{
    uint32_t num = 8;
    uint32_t mask = 5;

    printf("Original: %u\n", num);
    uint32_t res = set_multiple_bits(num, mask);
    printf("Result: %u or %X\n", res, res);

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 8
Result: 13 or D

//--------------------------------------------------

1000
0101

1101 // 13 or D

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_05_set_multiple_bits.c -o o_set_multiple_bits

./o_set_multiple_bits

*/
//--------------------------------------------------


