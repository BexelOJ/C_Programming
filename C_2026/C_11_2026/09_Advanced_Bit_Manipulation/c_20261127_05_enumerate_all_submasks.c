#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main()
{
    uint32_t num = 11;

    uint32_t submask = num;

    cout << "Submasks of " << bitset<4>(num) << ":\n";

    while (true)
    {
        cout << bitset<4>(submask) << '\n';

        if (submask == 0)
            break;

        submask = (submask - 1) & num;
    }

    return 0;
}


//--------------------------------------------------
/*
Output:

Submasks of 1011:
1011
1010
1001
1000
0011
0010
0001
0000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


