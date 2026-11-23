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
c_20261127_08_single_non_repeating_number.c -o o_single_non_repeating_number

./o_single_non_repeating_number

*/
//--------------------------------------------------


