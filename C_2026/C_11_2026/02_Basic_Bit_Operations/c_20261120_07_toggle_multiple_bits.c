#include <stdio.h>
#include <stdint.h>

uint32_t toggle_multiple_bits(uint32_t num, uint32_t mask)
{
    return num ^ mask;
}

int main(void)
{
    uint32_t num = 10;
    uint32_t mask = 3;

    printf("Original: %u\n", num);
    printf("Result: %u\n", toggle_multiple_bits(num, mask));

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 10
Result: 9

//--------------------------------------------------

1010  // 10
0011  // 3

1001  // 9

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_07_toggle_multiple_bits.c -o o_toggle_multiple_bits

./o_toggle_multiple_bits

*/
//--------------------------------------------------


