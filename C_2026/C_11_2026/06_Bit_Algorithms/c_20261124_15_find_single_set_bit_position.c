
#include <iostream>
#include <cstdint>
using namespace std;

int findSingleSetBitPosition(uint32_t num)
{
    if (num == 0 || (num & (num - 1U)) != 0)
        return -1;

    int position = 1;

    while ((num & 1U) == 0)
    {
        num >>= 1;
        position++;
    }

    return position;
}

int main()
{
    uint32_t num = 16;

    cout << "Number: " << num << endl;

    cout << "Set bit position: "
        << findSingleSetBitPosition(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 16
Set bit position: 5

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


