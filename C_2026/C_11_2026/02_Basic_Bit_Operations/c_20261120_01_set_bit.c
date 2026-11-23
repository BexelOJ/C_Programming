#include <stdio.h>
#include <stdint.h>

uint32_t set_bit(uint32_t num, unsigned int pos)
{
    return num | (1U << pos);
}

int main(void)
{
    uint32_t num = 10;
    unsigned int pos = 2;

    printf("Original: %u\n", num);
    printf("Result: %u\n", set_bit(num, pos));
    printf("Result: %X\n", set_bit(num, pos));

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 10
Result: 14

//--------------------------------------------------
1010  // 
0100  // 1U << 2

1110  // 14 / E

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_01_set_bit.c -o o_set_bit

./o_set_bit

*/
//--------------------------------------------------


