#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 4, 5, 6 };

    int n = 6;
    int result = 0;

    for (int i = 1; i <= n; i++)
        result ^= i;

    for (int num : arr)
        result ^= num;

    cout << "Missing number: " << result << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Missing number : 3

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


