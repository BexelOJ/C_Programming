
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t addWithoutPlus(uint32_t a, uint32_t b)
{
    while (b != 0)
    {
        uint32_t carry = (a & b) << 1;

        a = a ^ b;
        b = carry;
    }

    return a;
}

int main()
{
    uint32_t a = 15;
    uint32_t b = 9;

    cout << "Sum: " << addWithoutPlus(a, b) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Expected output:
Sum: 24

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_01_add_without_plus.c -o o_add_without_plus

./o_add_without_plus

*/
//--------------------------------------------------


