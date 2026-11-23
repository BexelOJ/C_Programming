#include <iostream>
#include <cstdint>
using namespace std;

class ResourceManager {
private:
    uint32_t bitmap = 0;

public:
    int allocate()
    {
        for (unsigned int i = 0; i < 32; i++)
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

    bool release(unsigned int index)
    {
        if (index >= 32)
            return false;

        uint32_t mask = 1U << index;

        if ((bitmap & mask) == 0)
            return false;

        bitmap &= ~mask;
        return true;
    }

    void display() const
    {
        cout << "Resource bitmap: "
            << bitmap << '\n';
    }
};

int main()
{
    ResourceManager manager;

    int a = manager.allocate();
    int b = manager.allocate();
    int c = manager.allocate();

    cout << "Allocated resources: "
        << a << ", " << b << ", " << c << '\n';

    manager.release(1);

    int d = manager.allocate();

    cout << "New resource: " << d << '\n';

    manager.display();

    return 0;
}


//--------------------------------------------------
/*
Output:

Allocated resources : 0, 1, 2
New resource : 1
Resource bitmap : 7

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_12_bitmaps_for_resource_allocation.c -o o_bitmaps_for_resource_allocation

./o_bitmaps_for_resource_allocation

*/
//--------------------------------------------------


