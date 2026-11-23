#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

int main()
{
    vector<int> arr = { 4, 2, 7, 3, 2, 5 };

    uint32_t bitmap = 0;

    cout << "Duplicate numbers: ";

    for (int num : arr)
    {
        if (num < 0 || num >= 32)
            continue;

        uint32_t mask = 1U << num;

        if (bitmap & mask)
            cout << num << " ";
        else
            bitmap |= mask;
    }

    cout << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Duplicate numbers : 2

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


