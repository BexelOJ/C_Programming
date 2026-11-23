#include <stdio.h>
#include <stdint.h>

int is_bit_set(uint32_t num, unsigned int pos)
{
    return (num & (1U << pos)) != 0;
}

int main(void)
{
    uint32_t num = 10;
    unsigned int pos = 3;
    // uint32_t pos = 3;

    if (is_bit_set(num, pos))
        printf("Bit %u is SET\n", pos);
    else
        printf("Bit %u is CLEAR\n", pos);

    return 0;
}


//--------------------------------------------------
/*
Output:

Bit 3 is SET

//--------------------------------------------------

1010  // 10



//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_04_check_bit.c -o o_check_bit

./o_check_bit

*/
//--------------------------------------------------


