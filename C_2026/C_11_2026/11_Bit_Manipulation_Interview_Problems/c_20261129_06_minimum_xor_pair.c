#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
using namespace std;

int main()
{
    vector<uint32_t> arr = { 9, 5, 3, 10, 15 };

    if (arr.size() < 2)
    {
        cout << "At least two elements required\n";
        return 0;
    }

    sort(arr.begin(), arr.end());

    uint32_t minimumXOR = UINT32_MAX;
    uint32_t first = 0;
    uint32_t second = 0;

    for (size_t i = 1; i < arr.size(); i++)
    {
        uint32_t result = arr[i - 1] ^ arr[i];

        if (result < minimumXOR)
        {
            minimumXOR = result;
            first = arr[i - 1];
            second = arr[i];
        }
    }

    cout << "First number: " << first << '\n';
    cout << "Second number: " << second << '\n';
    cout << "Minimum XOR: " << minimumXOR << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

First number : 9
Second number : 10
Minimum XOR : 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_06_minimum_xor_pair.c -o o_minimum_xor_pair

./o_minimum_xor_pair

*/
//--------------------------------------------------


