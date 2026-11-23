
#include <iostream>
#include <cstdint>
#include <cstring>
#include <climits>
using namespace std;

bool addWithOverflowCheck(
    int32_t a,
    int32_t b,
    uint32_t& result)
{
    uint32_t ua;
    uint32_t ub;

    memcpy(&ua, &a, sizeof(ua));
    memcpy(&ub, &b, sizeof(ub));

    uint32_t sum = ua;
    uint32_t carry = ub;

    while (carry != 0)
    {
        uint32_t nextCarry = (sum & carry) << 1;

        sum ^= carry;
        carry = nextCarry;
    }

    result = sum;

    // Signed overflow detection
    uint32_t overflow =
        (~(ua ^ ub) & (ua ^ sum)) >> 31;

    return overflow != 0;
}

int main()
{
    int32_t a = INT32_MAX;
    int32_t b = 1;

    uint32_t result = 0;

    bool overflow =
        addWithOverflowCheck(a, b, result);

    cout << "Overflow: "
        << (overflow ? "Yes" : "No") << endl;

    cout << "Result bits (hex): 0x"
        << hex << result << dec << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Overflow: Yes
Result bits (hex): 0x80000000

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


