
#include <iostream>
#include <cstdint>
#include <cstring>
using namespace std;

struct MinMax
{
    int32_t minimum;
    int32_t maximum;
};

MinMax findMinMax(int32_t a, int32_t b)
{
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);

    uint32_t signA = ua >> 31;
    uint32_t signB = ub >> 31;

    uint32_t differentSigns = signA ^ signB;
    uint32_t differenceSign = (ua - ub) >> 31;

    uint32_t chooseA =
        (differentSigns & signA) |
        ((differentSigns ^ 1U) & differenceSign);

    uint32_t mask = 0U - chooseA;

    uint32_t minBits = (ua & mask) | (ub & ~mask);
    uint32_t maxBits = (ub & mask) | (ua & ~mask);

    MinMax result;

    memcpy(&result.minimum, &minBits, sizeof(minBits));
    memcpy(&result.maximum, &maxBits, sizeof(maxBits));

    return result;
}

int main()
{
    int32_t a = -12;
    int32_t b = 7;

    MinMax result = findMinMax(a, b);

    cout << "Minimum: " << result.minimum << endl;
    cout << "Maximum: " << result.maximum << endl;

    return 0;
}


//--------------------------------------------------
/*
Output:

Minimum: -12
Maximum: 7

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_11_min_max_without_comparison.c -o o_min_max_without_comparison

./o_min_max_without_comparison

*/
//--------------------------------------------------


