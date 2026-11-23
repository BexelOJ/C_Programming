#include <stdio.h>
#include <stdint.h>

int is_power_of_two(uint32_t num)
{
    return (num != 0) && ((num & (num - 1)) == 0);
}

int main(void)
{
    uint32_t num = 16;

    if (is_power_of_two(num))
        printf("%u is a power of two\n", num);
    else
        printf("%u is not a power of two\n", num);

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_14_power_of_two.c -o o_power_of_two

./o_power_of_two

*/
//--------------------------------------------------


