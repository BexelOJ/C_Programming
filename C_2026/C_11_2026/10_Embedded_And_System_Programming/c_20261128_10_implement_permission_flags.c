#include <iostream>
#include <cstdint>
using namespace std;

class Permissions {
private:
    uint32_t permissions = 0;

public:
    static constexpr uint32_t READ = 1U << 0;
    static constexpr uint32_t WRITE = 1U << 1;
    static constexpr uint32_t EXECUTE = 1U << 2;
    static constexpr uint32_t DELETE = 1U << 3;

    void grant(uint32_t permission)
    {
        permissions |= permission;
    }

    void revoke(uint32_t permission)
    {
        permissions &= ~permission;
    }

    bool hasPermission(uint32_t permission) const
    {
        return (permissions & permission) == permission;
    }
};

int main()
{
    Permissions user;

    user.grant(Permissions::READ);
    user.grant(Permissions::WRITE);

    cout << "Read: "
        << user.hasPermission(Permissions::READ) << '\n';

    cout << "Write: "
        << user.hasPermission(Permissions::WRITE) << '\n';

    cout << "Execute: "
        << user.hasPermission(Permissions::EXECUTE) << '\n';

    user.revoke(Permissions::WRITE);

    cout << "Write after revoke: "
        << user.hasPermission(Permissions::WRITE) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Read: 1
Write : 1
Execute : 0
Write after revoke : 0
//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_10_implement_permission_flags.c -o o_implement_permission_flags

./o_implement_permission_flags

*/
//--------------------------------------------------


