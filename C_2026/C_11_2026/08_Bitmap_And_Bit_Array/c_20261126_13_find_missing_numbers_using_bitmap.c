#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int numbers[] = { 1, 2, 4, 5, 7, 8, 10 };
    const int size = sizeof(numbers) / sizeof(numbers[0]);

    const int MAX = 10;

    uint32_t bitmap = 0;

    for (int i = 0; i < size; i++)
    {
        int num = numbers[i];

        if (num >= 1 && num <= MAX)
            bitmap |= (1U << (num - 1));
    }

    cout << "Missing numbers: ";

    for (int i = 1; i <= MAX; i++)
    {
        if ((bitmap & (1U << (i - 1))) == 0)
            cout << i << " ";
    }

    cout << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Missing numbers : 3 6 9

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


