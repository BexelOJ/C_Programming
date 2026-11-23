
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t clearRightmostSetBit(uint32_t num)
{
    return num & (num - 1U);
}

int main()
{
    uint32_t num = 40;

    cout << "Original: " << num << endl;

    cout << "After clearing: "
        << clearRightmostSetBit(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 40
After clearing: 32

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_07_clear_rightmost_set_bit.c -o o_clear_rightmost_set_bit

./o_clear_rightmost_set_bit

*/
//--------------------------------------------------


