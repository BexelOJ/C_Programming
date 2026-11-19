
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 12;  // 00001100

 // uint8_t result = (uint8_t)~a; //  this is safe for some reasons
    uint8_t result = ~a;

    printf("A       = %u\n", a);
    printf("~A      = %u\n", result);

    return 0;
}


//--------------------------------------------------
/*
Output:

A       = 12
~A      = 243

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_04_not_operator.c -o o_not_operator

./and_operator

*/
//--------------------------------------------------


