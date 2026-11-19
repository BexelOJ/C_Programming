#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t u = 0xFF;
    int8_t  s = (int8_t)u;

    printf("Unsigned = %u\n", (unsigned int)u);
    printf("Signed   = %d\n", (int)s);

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


