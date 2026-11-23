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

    // Isolate the rightmost set bit
    uint32_t rightmostSetBit =
        xorResult & (~xorResult + 1U);

    uint32_t first = 0;
    uint32_t second = 0;

    for (int num : arr)
    {
        uint32_t value = static_cast<uint32_t>(num);

        if (value & rightmostSetBit)
            first ^= value;
        else
            second ^= value;
    }

    cout << "First unique number: "
        << static_cast<int32_t>(first) << '\n';

    cout << "Second unique number: "
        << static_cast<int32_t>(second) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

First unique number : 7
Second unique number : 9

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


