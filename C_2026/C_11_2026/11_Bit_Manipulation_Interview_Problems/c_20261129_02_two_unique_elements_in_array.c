#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

int main()
{
    vector<int> arr = { 2, 4, 7, 9, 2, 4 };

    uint32_t xorResult = 0;

    for (int num : arr)
        xorResult ^= static_cast<uint32_t>(num);

    uint32_t mask = xorResult & (~xorResult + 1U);

    uint32_t first = 0;
    uint32_t second = 0;

    for (int num : arr)
    {
        uint32_t value = static_cast<uint32_t>(num);

        if (value & mask)
            first ^= value;
        else
            second ^= value;
    }

    cout << "First unique: "
        << static_cast<int32_t>(first) << '\n';

    cout << "Second unique: "
        << static_cast<int32_t>(second) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

First unique : 7
Second unique : 9

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_02_two_unique_elements_in_array.c -o o_two_unique_elements_in_array

./o_two_unique_elements_in_array

*/
//--------------------------------------------------


