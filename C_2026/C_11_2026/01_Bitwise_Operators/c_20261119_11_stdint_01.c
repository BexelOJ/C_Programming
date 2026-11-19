#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t  a = 255;
    uint16_t b = 65535;
    uint32_t c = 100000;
    uint64_t d = 10000000000ULL;

    printf("8-bit  = %u\n", (unsigned int)a);
    printf("16-bit = %u\n", (unsigned int)b);
    printf("32-bit = %u\n", c);
    printf("64-bit = %llu\n", (unsigned long long)d);

    return 0;
}


//--------------------------------------------------
/*
Output:


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_11_stdint_01.c -o o_stdint

./and_operator

*/
//--------------------------------------------------


