#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 10, 20, 30 };

    int n = static_cast<int>(arr.size());
    int total = 1 << n;

    for (int mask = 0; mask < total; mask++)
    {
        cout << "{ ";

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                cout << arr[i] << " ";
        }

        cout << "}\n";
    }

    return 0;
}


//--------------------------------------------------
/*
Output:

{}
{ 10 }
{ 20 }
{ 10 20 }
{ 30 }
{ 10 30 }
{ 20 30 }
{ 10 20 30 }

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261127_04_generate_subsets_using_bitmasks.c -o o_generate_subsets_using_bitmasks

./o_generate_subsets_using_bitmasks

*/
//--------------------------------------------------


