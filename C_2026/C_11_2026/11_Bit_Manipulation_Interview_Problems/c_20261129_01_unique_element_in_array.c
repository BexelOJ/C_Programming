#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 4, 2, 7, 4, 2, 9, 9 };

    int result = 0;

    for (int num : arr)
        result ^= num;

    cout << "Unique element: " << result << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Unique element : 7

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261129_01_unique_element_in_array.c -o o_unique_element_in_array

./o_unique_element_in_array

*/
//--------------------------------------------------


