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
c_20261127_01_generate_gray_code.c -o o_generate_gray_code

./o_generate_gray_code

*/
//--------------------------------------------------


