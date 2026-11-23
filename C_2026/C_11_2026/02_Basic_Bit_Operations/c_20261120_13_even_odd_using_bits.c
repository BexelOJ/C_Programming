#include <stdio.h>
#include <stdint.h>

int is_odd(uint32_t num)
{
    return num & 1U;
}

int main(void)
{
    uint32_t num = 7;

    if (is_odd(num))
        printf("%u is ODD\n", num);
    else
        printf("%u is EVEN\n", num);

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_13_even_odd_using_bits.c -o o_even_odd_using_bits

./o_even_odd_using_bits

*/
//--------------------------------------------------


