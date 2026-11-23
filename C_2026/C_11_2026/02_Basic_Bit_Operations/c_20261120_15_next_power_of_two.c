#include <stdio.h>
#include <stdint.h>

uint32_t next_power_of_two(uint32_t num)
{
    if (num <= 1)
        return 1;

    if (num > 0x80000000U)
        return 0;

    num--;

    num |= num >> 1;
    num |= num >> 2;
    num |= num >> 4;
    num |= num >> 8;
    num |= num >> 16;

    return num + 1;
}

int main(void)
{
    uint32_t num = 10;

    printf("Original: %u\n", num);
    printf("Next power of two: %u\n",
        next_power_of_two(num));

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_15_next_power_of_two.c -o o_next_power_of_two

./o_next_power_of_two

*/
//--------------------------------------------------


