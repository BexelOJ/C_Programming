#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
    vector<int> arr = { 3, 5, 7, 10 };

    const int MAX_SUM = 100;
    const int target = 15;

    bitset<MAX_SUM + 1> possible;

    // Sum zero is always possible
    possible.set(0);

    for (int num : arr)
    {
        if (num < 0 || num > MAX_SUM)
            continue;

        possible |= (possible << num);
    }

    cout << "Target sum: " << target << '\n';

    if (possible.test(target))
        cout << "Subset sum exists\n";
    else
        cout << "Subset sum does not exist\n";

    return 0;
}


//--------------------------------------------------
/*
Output:

Target sum : 15
Subset sum exists

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261127_15_subset_sum_using_bitset.c -o o_subset_sum_using_bitset

./o_subset_sum_using_bitset

*/
//--------------------------------------------------


