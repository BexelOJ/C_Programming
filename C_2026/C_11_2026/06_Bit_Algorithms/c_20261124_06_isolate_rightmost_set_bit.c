
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t isolateRightmostSetBit(uint32_t num)
{
    return num & (~num + 1U);
}

int main()
{
    uint32_t num = 40;

    cout << "Number: " << num << endl;

    cout << "Rightmost set bit: "
        << isolateRightmostSetBit(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 40
Rightmost set bit: 8

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_06_isolate_rightmost_set_bit.c -o o_isolate_rightmost_set_bit

./o_isolate_rightmost_set_bit

*/
//--------------------------------------------------


