#include <stdio.h>
#include <stdint.h>

uint32_t clear_multiple_bits(uint32_t num, uint32_t mask)
{
    return num & ~mask;
}

int main(void)
{
    uint32_t num = 15;
    uint32_t mask = 5;

    printf("Original: %u\n", num);
    uint32_t res = clear_multiple_bits(num, mask);
    printf("Result: %u or %X\n", res, res);

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 15
Result: 10 or A

//--------------------------------------------------

1111  // 15
0101  // 5

1111  // 15
1010  // ~5 = 10

1010  // 10 or A

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_06_clear_multiple_bits.c -o o_clear_multiple_bits

./o_clear_multiple_bits

*/
//--------------------------------------------------


