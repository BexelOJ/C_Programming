#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int longestConsecutiveSetBits(uint32_t n)
{
    int count = 0;

    while (n != 0)
    {
        n &= (n << 1);
        count++;
    }

    return count;
}

int main()
{
    uint32_t n = 0b0111011110;

    cout << "Binary: " << bitset<10>(n) << '\n';

    cout << "Longest consecutive set bits: "
        << longestConsecutiveSetBits(n) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Binary: 0111011110
Longest consecutive set bits : 4

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_12_longest_sequence_consecutive_set_bits.c -o o_longest_sequence_consecutive_set_bits

./o_longest_sequence_consecutive_set_bits

*/
//--------------------------------------------------


