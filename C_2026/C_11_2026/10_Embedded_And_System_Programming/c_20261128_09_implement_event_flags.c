#include <iostream>
#include <atomic>
#include <cstdint>
using namespace std;

class EventFlags {
private:
    atomic<uint32_t> events{ 0 };

public:
    void setEvent(unsigned int bit)
    {
        events.fetch_or(1U << bit);
    }

    void clearEvent(unsigned int bit)
    {
        events.fetch_and(~(1U << bit));
    }

    bool checkEvent(unsigned int bit) const
    {
        return (events.load() & (1U << bit)) != 0;
    }

    uint32_t consumeEvents()
    {
        return events.exchange(0);
    }
};

int main()
{
    EventFlags eventFlags;

    eventFlags.setEvent(0);
    eventFlags.setEvent(2);

    cout << "Data received: "
        << eventFlags.checkEvent(0) << '\n';

    cout << "Error occurred: "
        << eventFlags.checkEvent(2) << '\n';

    uint32_t pending = eventFlags.consumeEvents();

    cout << "Consumed event flags: "
        << pending << '\n';

    cout << "Remaining flags: "
        << eventFlags.consumeEvents() << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Data received : 1
Error occurred : 1
Consumed event flags : 5
Remaining flags : 0

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


