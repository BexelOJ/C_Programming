
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 5;  // 00000101

    uint8_t result = (uint8_t)(a << 1);

    printf("A       = %u\n", a);
    printf("A << 1  = %u\n", result);

    return 0;
}


//--------------------------------------------------
/*
Output:

A       = 5
A << 1  = 10

//--------------------------------------------------
00000101
   << 1
--------
00001010  // 8 + 2 = 10

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_05_left_shift.c -o o_left_shift

./o_left_shift

*/
//--------------------------------------------------


