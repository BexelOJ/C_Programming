#include <stdio.h>
#include <stdint.h>

uint32_t previous_power_of_two(uint32_t num)
{
    if (num == 0)
        return 0;

    num |= num >> 1;
    num |= num >> 2;
    num |= num >> 4;
    num |= num >> 8;
    num |= num >> 16;

    return num - (num >> 1);
}

int main(void)
{
    uint32_t num = 10;

    printf("Original: %u\n", num);
    printf("Previous power of two: %u\n",
        previous_power_of_two(num));

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_16_previous_power_of_two.c -o o_previous_power_of_two

./o_previous_power_of_two

*/
//--------------------------------------------------


