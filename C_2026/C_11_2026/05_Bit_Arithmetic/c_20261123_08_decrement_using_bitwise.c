
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t decrementUsingBits(uint32_t num)
{
    uint32_t mask = 1;

    while ((num & mask) == 0)
    {
        num ^= mask;
        mask <<= 1;
    }

    num ^= mask;

    return num;
}

int main()
{
    uint32_t num = 42;

    cout << "Decremented: "
        << decrementUsingBits(num) << endl;

    return 0;
}




//--------------------------------------------------
/*
Output:

Decremented: 41

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_08_decrement_using_bitwise.c -o o_decrement_using_bitwise

./o_decrement_using_bitwise

*/
//--------------------------------------------------


