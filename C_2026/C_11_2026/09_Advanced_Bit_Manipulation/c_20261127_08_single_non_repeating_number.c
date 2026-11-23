#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 4, 2, 7, 4, 2 };

    int result = 0;

    for (int num : arr)
        result ^= num;

    cout << "Non-repeating number: " << result << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Non - repeating number : 7

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


