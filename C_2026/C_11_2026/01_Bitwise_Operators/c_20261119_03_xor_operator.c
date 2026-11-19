
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 12;  // 00001100
    uint8_t b = 10;  // 00001010

    uint8_t result = a ^ b;

    printf("A      = %u\n", a);
    printf("B      = %u\n", b);
    printf("A ^ B  = %u\n", result);

    return 0;
}


//--------------------------------------------------
/*
Output:

A      = 12  // 00001100
B      = 10  // 00001010
A ^ B  = 6   // 00000110 // 4 + 2

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_03_xor_operator.c -o o_xor_operator

./and_operator

*/
//--------------------------------------------------


