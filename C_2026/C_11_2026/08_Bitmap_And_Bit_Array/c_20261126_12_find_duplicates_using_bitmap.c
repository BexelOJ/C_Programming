#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int numbers[] = { 2, 5, 3, 2, 7, 5, 9, 3 };
    const int size = sizeof(numbers) / sizeof(numbers[0]);

    uint32_t bitmap = 0;

    cout << "Duplicate numbers: ";

    for (int i = 0; i < size; i++)
    {
        int num = numbers[i];

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

Duplicate numbers : 2 5 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261126_12_find_duplicates_using_bitmap.c -o o_20261126_12_find_duplicates_using_bitmap

./o_20261126_12_find_duplicates_using_bitmap

*/
//--------------------------------------------------


