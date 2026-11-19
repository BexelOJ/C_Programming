
#include <stdio.h>
#include <stdint.h>

void convert_to_binary(int a) {
    printf("Binary representation of %d: ", a);
    for (int i = 7; i >= 0; i--) {
        printf("%u", ((a >> i)&1));
    }
    printf("\n");
}


int main(void)
{
    uint8_t unsigned_value = 0xF0;
    int8_t signed_value = -16;

    uint8_t logical_result = unsigned_value >> 2;
    int8_t arithmetic_result = signed_value >> 2;

    printf("Unsigned value         = %u\n", unsigned_value);
    printf("Logical right shift    = %u\n", logical_result);

    printf("Signed value           = %d\n", signed_value);
    printf("Signed right shift     = %d\n", arithmetic_result);

    convert_to_binary(unsigned_value);
    convert_to_binary(signed_value);

    convert_to_binary(logical_result);
    convert_to_binary(arithmetic_result);

    return 0;
}


//--------------------------------------------------
/*
Output:

Unsigned value         = 240
Logical right shift    = 60
Signed value           = -16
Signed right shift     = -4

//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261119_12_signedExperiments.c -o o_signedExperiments

./o_signedExperiments

//--------------------------------------------------
Binary	uint8_t	int8_t

00000000	0	0
00000001	1	1
01111111	127	127
10000000	128	-128
11110000	240	-16
11111110	254	-2
11111111	255	-1

The most important takeaway:

The physical bits do not change. 
The data type determines how those bits are 
interpreted.

*/
//--------------------------------------------------





