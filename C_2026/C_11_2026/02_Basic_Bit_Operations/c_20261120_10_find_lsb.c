#include <stdio.h>
#include <stdint.h>

int find_lsb(uint32_t num)
{
    if (num == 0)
        return -1;

    int pos = 0;

    while ((num & 1U) == 0)
    {
        num >>= 1;
        pos++;
    }

    return pos;
}

int main(void)
{
    uint32_t num = 40;

    printf("Number: %u\n", num);
    printf("LSB position: %d\n", find_lsb(num));

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_10_find_lsb.c -o o_find_lsb

./o_find_lsb

*/
//--------------------------------------------------


