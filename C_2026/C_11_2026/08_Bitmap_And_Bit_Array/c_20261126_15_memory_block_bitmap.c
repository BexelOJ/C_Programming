#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

class MemoryPool {
private:
    static constexpr unsigned int TOTAL_BLOCKS = 16;
    uint32_t bitmap = 0;

public:
    int allocateBlock()
    {
        for (unsigned int i = 0; i < TOTAL_BLOCKS; i++)
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

    bool releaseBlock(unsigned int index)
    {
        if (index >= TOTAL_BLOCKS)
            return false;

        uint32_t mask = 1U << index;

        if ((bitmap & mask) == 0)
            return false;

        bitmap &= ~mask;
        return true;
    }

    void display() const
    {
        cout << "Memory block bitmap: "
            << bitset<16>(bitmap) << '\n';
    }
};

int main()
{
    MemoryPool pool;

    int block1 = pool.allocateBlock();
    int block2 = pool.allocateBlock();
    int block3 = pool.allocateBlock();

    cout << "Allocated blocks: "
        << block1 << ", "
        << block2 << ", "
        << block3 << '\n';

    pool.display();

    pool.releaseBlock(1);

    cout << "After releasing block 1:\n";
    pool.display();

    int block4 = pool.allocateBlock();

    cout << "New block allocated: " << block4 << '\n';

    pool.display();

    return 0;
}


//--------------------------------------------------
/*
Output:

Allocated blocks : 0, 1, 2
Memory block bitmap : 0000000000000111
After releasing block 1 :

Memory block bitmap : 0000000000000101
New block allocated : 1
Memory block bitmap : 0000000000000111

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261124_15_find_single_set_bit_position.c -o o_find_single_set_bit_position

./o_find_single_set_bit_position

*/
//--------------------------------------------------


