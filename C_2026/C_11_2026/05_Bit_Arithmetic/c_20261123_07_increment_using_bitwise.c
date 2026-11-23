
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t incrementUsingBits(uint32_t num)
{
    uint32_t mask = 1;

    while (num & mask)
    {
        num ^= mask;
        mask <<= 1;
    }

    num ^= mask;

    return num;
}

int main()
{
    uint32_t num = 41;

    cout << "Incremented: "
        << incrementUsingBits(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Expected output:
Incremented: 42

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_07_increment_using_bitwise.c -o o_increment_using_bitwise

./o_increment_using_bitwise

*/
//--------------------------------------------------


