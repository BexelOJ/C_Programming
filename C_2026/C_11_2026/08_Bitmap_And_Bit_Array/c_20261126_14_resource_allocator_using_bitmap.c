#include <iostream>
#include <cstdint>
using namespace std;

class ResourceAllocator {
private:
    uint32_t bitmap = 0;
    static constexpr unsigned int TOTAL = 8;

public:
    int allocate()
    {
        for (unsigned int i = 0; i < TOTAL; i++)
        {
            uint32_t mask = 1U << i;

            if ((bitmap & mask) == 0)
            {
                bitmap |= mask;
                return static_cast<int>(i);
            }
        }

        return -1;
    }

    bool release(unsigned int position)
    {
        if (position >= TOTAL)
            return false;

        uint32_t mask = 1U << position;

        if ((bitmap & mask) == 0)
            return false;

        bitmap &= ~mask;
        return true;
    }

    void display() const
    {
        cout << "Allocated resources: ";

        for (unsigned int i = 0; i < TOTAL; i++)
            cout << ((bitmap >> i) & 1U) << " ";

        cout << '\n';
    }
};

int main()
{
    ResourceAllocator allocator;

    int r1 = allocator.allocate();
    int r2 = allocator.allocate();
    int r3 = allocator.allocate();

    cout << "Allocated: " << r1 << ", " << r2 << ", " << r3 << '\n';

    allocator.display();

    allocator.release(1);

    cout << "After releasing resource 1:\n";
    allocator.display();

    int r4 = allocator.allocate();

    cout << "New allocation: " << r4 << '\n';

    allocator.display();

    return 0;
}





//--------------------------------------------------
/*
Output:

Allocated: 0, 1, 2
Allocated resources : 1 1 1 0 0 0 0 0
After releasing resource 1 :

Allocated resources : 1 0 1 0 0 0 0 0
New allocation : 1
Allocated resources : 1 1 1 0 0 0 0 0

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


