#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint32_t bitmap = 0b1110001111110000U;

    const int required = 3;
    int count = 0;
    int start = -1;

    for (int i = 0; i < 32; i++)
    {
        if ((bitmap & (1U << i)) == 0)
        {
            count++;

            if (count == required)
            {
                start = i - required + 1;
                break;
            }
        }
        else
        {
            count = 0;
        }
    }

    if (start != -1)
        cout << "Three consecutive free bits start at: "
        << start << '\n';
    else
        cout << "No suitable range found\n";

    return 0;
}


//--------------------------------------------------
/*
Output:

Three consecutive free bits start at : 4

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261126_09_find_consecutive_free_bits.c -o o_find_consecutive_free_bits

./o_find_consecutive_free_bits

*/
//--------------------------------------------------


