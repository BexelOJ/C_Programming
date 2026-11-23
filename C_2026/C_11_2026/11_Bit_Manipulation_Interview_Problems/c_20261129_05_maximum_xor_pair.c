#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

int main()
{
    vector<uint32_t> arr = { 3, 10, 5, 25, 2, 8 };

    uint32_t maximumXOR = 0;
    uint32_t first = 0;
    uint32_t second = 0;

    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            uint32_t result = arr[i] ^ arr[j];

            if (result > maximumXOR)
            {
                maximumXOR = result;
                first = arr[i];
                second = arr[j];
            }
        }
    }

    cout << "First number: " << first << '\n';
    cout << "Second number: " << second << '\n';
    cout << "Maximum XOR: " << maximumXOR << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

First number : 5
Second number : 25
Maximum XOR : 28

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_05_maximum_xor_pair.c -o o_maximum_xor_pair

./o_maximum_xor_pair

*/
//--------------------------------------------------


