
#include <iostream>
#include <cstdint>
using namespace std;

int32_t averageUsingBits(int32_t a, int32_t b)
{
    return (a & b) + ((a ^ b) >> 1);
}

int main()
{
    int32_t a = 10;
    int32_t b = 15;

    cout << "Average: "
        << averageUsingBits(a, b) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Average: 12

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_10_average_using_bitwise.c -o o_average_using_bitwise

./o_average_using_bitwise

*/
//--------------------------------------------------


