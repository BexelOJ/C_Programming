
#include <iostream>
#include <cstdint>
using namespace std;

bool isBinaryPalindrome(uint32_t num)
{
    if (num == 0)
        return true;

    uint32_t left = 31;
    uint32_t right = 0;

    while ((num & (1U << left)) == 0)
        left--;

    while (left > right)
    {
        uint32_t leftBit = (num >> left) & 1U;
        uint32_t rightBit = (num >> right) & 1U;

        if (leftBit != rightBit)
            return false;

        left--;
        right++;
    }

    return true;
}

int main()
{
    uint32_t num = 9;

    cout << "Number: " << num << endl;

    cout << "Binary palindrome: "
        << (isBinaryPalindrome(num) ? "Yes" : "No") << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Number: 9
Binary palindrome: Yes

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_12_binary_palindrome.c -o o_binary_palindrome

./o_binary_palindrome

*/
//--------------------------------------------------


