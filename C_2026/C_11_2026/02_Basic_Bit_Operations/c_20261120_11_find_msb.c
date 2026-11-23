#include <stdio.h>
#include <stdint.h>

int find_msb(uint32_t num)
{
    if (num == 0)
        return -1;

    int pos = 0;

    while (num >>= 1)
        pos++;

    return pos;
}

int main(void)
{
    uint32_t num = 40;

    printf("Number: %u\n", num);
    printf("MSB position: %d\n", find_msb(num));

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_11_find_msb.c -o o_find_msb

./o_find_msb

*/
//--------------------------------------------------


