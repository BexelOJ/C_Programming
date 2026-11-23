#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

int main()
{
    vector<int32_t> arr = { 5, 5, 5, 7, 7, 7, 9 };

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

    cout << "Non-repeating number: "
        << static_cast<int32_t>(result) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Non - repeating number : 9

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261127_09_non_repeating_number_among_triplets.c -o o_non_repeating_number_among_triplets

./o_non_repeating_number_among_triplets

*/
//--------------------------------------------------


