
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 12;  // 00001100
    uint8_t b = 10;  // 00001010
    uint8_t c = 6;   // 00000110

    uint8_t result1 = a & b | c;
    uint8_t result2 = a & (b | c);
    uint8_t result3 = (a & b) | c;

    printf("a = %u\n", (unsigned int)a);
    printf("b = %u\n", (unsigned int)b);
    printf("c = %u\n\n", (unsigned int)c);

    printf("a & b | c     = %u\n", (unsigned int)result1);
    printf("a & (b | c)   = %u\n", (unsigned int)result2);
    printf("(a & b) | c   = %u\n", (unsigned int)result3);

    return 0;
}


//--------------------------------------------------
/*
Output:

a = 12
b = 10
c = 6

a & b | c     = 14
a & (b | c)   = 12
(a & b) | c   = 14

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_08_operator_precedence.c -o o_operator_precedence

./o_operator_precedence

*/
//--------------------------------------------------


