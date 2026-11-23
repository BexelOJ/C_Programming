#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

int32_t findSingleNumber(const vector<int32_t>& arr)
{
    uint32_t result = 0;

    for (int bit = 0; bit < 32; bit++)
    {
        unsigned int count = 0;

        for (int32_t num : arr)
        {
            uint32_t value = static_cast<uint32_t>(num);

            if (value & (1U << bit))
                count++;
        }

        if (count % 3 != 0)
            result |= (1U << bit);
    }

    return static_cast<int32_t>(result);
}

int main()
{
    vector<int32_t> arr = { 5, 5, 5, 7, 7, 7, 9 };

    cout << "Single number: "
        << findSingleNumber(arr) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Single number : 9

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_08_single_number_appearing_once_among_triplets.c -o o_c_20261129_08_single_number_appearing_once_among_triplets

./o_c_20261129_08_single_number_appearing_once_among_triplets

*/
//--------------------------------------------------


