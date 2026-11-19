
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 20;

    uint8_t result = (uint8_t)(a >> 2);

    printf("A       = %u\n", a);
    printf("A >> 2  = %u\n", result);

    return 0;
}


//--------------------------------------------------
/*
Output:

A       = 20
A >> 2  = 5

//--------------------------------------------------
00010100
   >> 2
--------
00000101

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_06_right_shift.c -o o_right_shift

./o_right_shift

*/
//--------------------------------------------------


