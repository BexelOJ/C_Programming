#include <iostream>
#include <cstdint>
using namespace std;

int countBitsToFlip(uint32_t a, uint32_t b)
{
    uint32_t difference = a ^ b;

    int count = 0;

    while (difference)
    {
        difference &= (difference - 1U);
        count++;
    }

    return count;
}

int main()
{
    uint32_t a = 10;
    uint32_t b = 20;

    cout << "A: " << a << '\n';
    cout << "B: " << b << '\n';

    cout << "Bits to flip: "
        << countBitsToFlip(a, b) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

A: 10
B : 20
Bits to flip : 4

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_09_bits_to_flip_to_convert_a_to_b.c -o o_bits_to_flip_to_convert_a_to_b

./o_bits_to_flip_to_convert_a_to_b

*/
//--------------------------------------------------


