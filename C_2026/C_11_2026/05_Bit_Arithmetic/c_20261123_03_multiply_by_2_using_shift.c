
#include <iostream>
#include <cstdint>
using namespace std;

uint32_t multiplyByTwo(uint32_t num)
{
    return num << 1;
}

int main()
{
    uint32_t num = 21;

    cout << "Result: " << multiplyByTwo(num) << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Expected output:
Result: 42

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_03_multiply_by_2_using_shift.c -o o_multiply_by_2_using_shift

./o_multiply_by_2_using_shift

*/
//--------------------------------------------------


