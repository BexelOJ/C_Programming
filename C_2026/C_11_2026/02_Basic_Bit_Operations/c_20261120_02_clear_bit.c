#include <stdio.h>
#include <stdint.h>

uint32_t clear_bit(uint32_t num, unsigned int pos)
{
    return num & ~(1U << pos);
}

int main(void)
{
    uint32_t num = 10;
    unsigned int pos = 1;

    printf("Original: %u\n", num);
    printf("Result: %u\n", clear_bit(num, pos));

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 10
Result: 8

//--------------------------------------------------
1010  // 10
0010  // 1U << 1

1010  // 10
1101  // ~(1U << 1)

1000 // 8 

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_02_clear_bit.c -o o_clear_bit

./o_clear_bit

*/
//--------------------------------------------------


