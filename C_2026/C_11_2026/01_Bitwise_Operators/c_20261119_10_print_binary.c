#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t num)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%u", (num >> i) & 1);
    }

    printf("\n");
}

int main(void)
{
    uint8_t a = 12;

    printf("Decimal = %u\n", (unsigned int)a);

    printf("Binary  = ");
    print_binary(a);

    return 0;
}


//--------------------------------------------------
/*

*/
//--------------------------------------------------
/*

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261110_print_binary.c -o o_print_binary

./o_print_binary

*/
//--------------------------------------------------


