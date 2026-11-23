#include <iostream>
#include <cstdint>
using namespace std;

class Device {
private:
    uint32_t capabilities;

public:
    static constexpr uint32_t DMA = 1U << 0;
    static constexpr uint32_t INTERRUPT = 1U << 1;
    static constexpr uint32_t FULL_DUPLEX = 1U << 2;
    static constexpr uint32_t FLOW_CONTROL = 1U << 3;

    explicit Device(uint32_t caps)
        : capabilities(caps)
    {}

    bool supports(uint32_t capability) const
    {
        return (capabilities & capability) == capability;
    }
};

int main()
{
    Device uart(Device::DMA | Device::INTERRUPT |
        Device::FULL_DUPLEX);

    cout << "DMA: "
        << uart.supports(Device::DMA) << '\n';

    cout << "Interrupt: "
        << uart.supports(Device::INTERRUPT) << '\n';

    cout << "Full duplex: "
        << uart.supports(Device::FULL_DUPLEX) << '\n';

    cout << "Flow control: "
        << uart.supports(Device::FLOW_CONTROL) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

DMA: 1
Interrupt : 1
Full duplex : 1
Flow control : 0

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


