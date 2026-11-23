
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t rightmostUnsetBit(uint32_t num)
{
    return ~num & (num + 1U);
}

int main()
{
    uint32_t num = 11;

    cout << "Number: " << num << endl;

    cout << "Rightmost unset bit mask: "
        << rightmostUnsetBit(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 11
Rightmost unset bit mask: 4

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_08_find_rightmost_unset_bit.c -o o_find_rightmost_unset_bit

./o_find_rightmost_unset_bit

*/
//--------------------------------------------------


