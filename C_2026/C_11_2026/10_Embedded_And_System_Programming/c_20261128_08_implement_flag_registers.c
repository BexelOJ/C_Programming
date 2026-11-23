#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

class FlagRegister {
private:
    uint32_t flags = 0;

public:
    void setFlag(unsigned int bit)
    {
        flags |= (1U << bit);
    }

    void clearFlag(unsigned int bit)
    {
        flags &= ~(1U << bit);
    }

    bool checkFlag(unsigned int bit) const
    {
        return (flags & (1U << bit)) != 0;
    }

    void display() const
    {
        cout << bitset<8>(flags) << '\n';
    }
};

int main()
{
    FlagRegister status;

    status.setFlag(0);
    status.setFlag(2);
    status.setFlag(5);

    cout << "Flags: ";
    status.display();

    cout << "Flag 2: " << status.checkFlag(2) << '\n';

    status.clearFlag(2);

    cout << "After clearing flag 2: ";
    status.display();

    return 0;
}


//--------------------------------------------------
/*
Output:

Flags: 00100101
Flag 2 : 1
After clearing flag 2 : 00100001

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_08_implement_flag_registers.c -o o_implement_flag_registers

./o_implement_flag_registers

*/
//--------------------------------------------------


