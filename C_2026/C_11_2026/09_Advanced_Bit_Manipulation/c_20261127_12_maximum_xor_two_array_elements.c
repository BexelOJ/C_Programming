#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

uint32_t findMaximumXOR(const vector<uint32_t>& arr)
{
    uint32_t result = 0;
    uint32_t mask = 0;

    for (int bit = 31; bit >= 0; bit--)
    {
        mask |= (1U << bit);

        uint32_t candidate = result | (1U << bit);

        bool found = false;

        for (size_t i = 0; i < arr.size(); i++)
        {
            for (size_t j = i + 1; j < arr.size(); j++)
            {
                if (((arr[i] ^ arr[j]) & mask) == candidate)
                {
                    found = true;
                    break;
                }
            }

            if (found)
                break;
        }

        if (found)
            result = candidate;
    }

    return result;
}

int main()
{
    vector<uint32_t> arr = { 3, 10, 5, 25, 2, 8 };

    cout << "Maximum XOR: "
        << findMaximumXOR(arr) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Maximum XOR : 28

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


