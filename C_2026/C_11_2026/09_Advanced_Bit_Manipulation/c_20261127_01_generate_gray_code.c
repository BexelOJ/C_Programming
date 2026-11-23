#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int bits = 3;
    int total = 1 << bits;

    cout << "Gray code sequence:\n";

    for (int i = 0; i < total; i++)
    {
        int gray = i ^ (i >> 1);

        cout << gray << '\n';
    }

    return 0;
}


//--------------------------------------------------
/*
Output:

Gray code sequence :
0
1
3
2
6
7
5
4


//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


