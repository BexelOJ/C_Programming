#include <iostream>
#include <vector>
using namespace std;

int findSingleNumber(const vector<int>& arr)
{
    int result = 0;

    for (int num : arr)
        result ^= num;

    return result;
}

int main()
{
    vector<int> arr = { 6, 3, 8, 6, 3 };

    cout << "Single number: "
        << findSingleNumber(arr) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Single number : 8

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_07_single_number_appearing_once.c -o o_single_number_appearing_once

./o_single_number_appearing_once

*/
//--------------------------------------------------


