
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t reverseBitsInRange(
    uint32_t num,
    unsigned int left,
    unsigned int right)
{
    if (left >= 32 || right >= 32 || left > right)
        return num;

    while (left < right)
    {
        uint32_t bit1 = (num >> left) & 1U;
        uint32_t bit2 = (num >> right) & 1U;

        if (bit1 != bit2)
        {
            num ^= (1U << left);
            num ^= (1U << right);
        }

        left++;
        right--;
    }

    return num;
}

int main()
{
    uint32_t num = 44;

    cout << "Original: " << num << endl;

    cout << "Reversed range: "
        << reverseBitsInRange(num, 0, 5) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 44
Reversed range: 38

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_03_reverse_bits_in_range.c -o o_reverse_bits_in_range

./o_reverse_bits_in_range

*/
//--------------------------------------------------


