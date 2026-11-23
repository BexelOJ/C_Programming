#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 3, 5, 6, 7 };

    int n = 7;
    int result = 0;

    for (int i = 1; i <= n; i++)
        result ^= i;

    for (int num : arr)
        result ^= num;

    cout << "Missing integer: " << result << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Missing integer : 4

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_03_missing_integer_in_sequence.c -o o_missing_integer_in_sequence

./o_missing_integer_in_sequence

*/
//--------------------------------------------------


