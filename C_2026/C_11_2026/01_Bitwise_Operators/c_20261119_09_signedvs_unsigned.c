
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t unsigned_value = 0xF0;
    int8_t signed_value = (int8_t)unsigned_value;

    printf("Hexadecimal value : 0x%02X\n",
        (unsigned int)unsigned_value);

    printf("Unsigned decimal : %u\n",
        (unsigned int)unsigned_value);

    printf("Signed decimal   : %d\n",
        (int)signed_value);

    printf("\nBinary representation: 11110000\n");

    return 0;
}


//--------------------------------------------------
/*
Output:

Hexadecimal value : 0xF0
Unsigned decimal : 240
Signed decimal   : -16

Binary representation: 11110000

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_09_signedvs_unsigned.c -o o_signed_vs_unsigned

./o_signedvs_unsigned

*/
//--------------------------------------------------


