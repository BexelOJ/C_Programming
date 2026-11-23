#include <iostream>
#include <atomic>
#include <cstdint>
using namespace std;

int main()
{
    atomic<uint32_t> flags{ 0 };

    // Set bit 2 atomically
    flags.fetch_or(1U << 2);

    // Set bit 5 atomically
    flags.fetch_or(1U << 5);

    cout << "After setting: "
        << flags.load() << '\n';

    // Clear bit 2 atomically
    flags.fetch_and(~(1U << 2));

    cout << "After clearing bit 2: "
        << flags.load() << '\n';

    // Toggle bit 5 atomically
    flags.fetch_xor(1U << 5);

    cout << "After toggling bit 5: "
        << flags.load() << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

After setting : 36
After clearing bit 2 : 32
After toggling bit 5 : 0

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


