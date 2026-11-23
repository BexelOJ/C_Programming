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
c_20261127_10_missing_number_using_xor.c -o o_missing_number_using_xor

./o_missing_number_using_xor

*/
//--------------------------------------------------


