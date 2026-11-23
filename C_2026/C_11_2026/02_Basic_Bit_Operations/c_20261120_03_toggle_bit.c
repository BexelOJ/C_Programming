#include <stdio.h>
#include <stdint.h>

uint32_t toggle_bit(uint32_t num, unsigned int pos)
{
    return num ^ (1U << pos);
}

int main(void)
{
    uint32_t num = 10;
    unsigned int pos_1 = 1;
    unsigned int pos_2 = 2;

    printf("Original: %u\n", num);
    printf("Result: %u\n\n", toggle_bit(num, pos_1));

    printf("Original: %u\n", num);
    uint32_t res = toggle_bit(num, pos_2);
    printf("Result: %u or %X\n", res, res);

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 10
Result: 8
Original: 10
Result: 14 or E

//--------------------------------------------------

1010  // 8
0010

1000  // 8

-------------------

1010  // 8
0100

1110  // 14 / E


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_03_toggle_bit.c -o o_toggle_bit

./o_toggle_bit

*/
//--------------------------------------------------


