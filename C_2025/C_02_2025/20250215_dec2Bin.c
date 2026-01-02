#include <stdio.h>

void decimalToBinary(int n) 
{
    // Size of an integer in bytes
    int size = sizeof(n) * 8;
    
    // Loop through each bit of the integer
    for (int i = size - 1; i >= 0; i--) {
        // Print 1 or 0 based on the value of the bit
        if ((n >> i) & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main() 
{
    int num;

    printf("Enter a Decimal Number: ");
    scanf("%d", &num);

    printf("Binary Representation: ");
    decimalToBinary(num);

    return 0;
}

