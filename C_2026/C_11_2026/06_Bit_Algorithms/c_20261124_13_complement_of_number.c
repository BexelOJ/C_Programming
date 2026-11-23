
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t findComplement(uint32_t num)
{
    if (num == 0)
        return 1;

    uint32_t mask = num;

    mask |= mask >> 1;
    mask |= mask >> 2;
    mask |= mask >> 4;
    mask |= mask >> 8;
    mask |= mask >> 16;

    return num ^ mask;
}

int main()
{
    uint32_t num = 10;

    cout << "Original: " << num << endl;

    cout << "Complement: "
        << findComplement(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Original: 10
Complement: 5

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_13_complement_of_number.c -o o_complement_of_number

./o_complement_of_number

*/
//--------------------------------------------------


