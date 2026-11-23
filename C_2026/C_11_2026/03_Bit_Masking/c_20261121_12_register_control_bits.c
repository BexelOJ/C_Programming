#include <stdio.h>
#include <stdint.h>

#define MOTOR_ENABLE    (1U << 0)
#define MOTOR_DIRECTION (1U << 1)
#define MOTOR_INTERRUPT (1U << 2)

uint32_t set_register_bits(uint32_t reg, uint32_t mask)
{
    return reg | mask;
}

uint32_t clear_register_bits(uint32_t reg, uint32_t mask)
{
    return reg & ~mask;
}

int main(void)
{
    uint32_t control_register = 0;

    /* Enable motor and interrupt */
    control_register = set_register_bits(
        control_register,
        MOTOR_ENABLE | MOTOR_INTERRUPT
    );

    printf("After SET:   0x%08X\n", control_register);

    /* Change motor direction */
    control_register = set_register_bits(
        control_register,
        MOTOR_DIRECTION
    );

    printf("Direction:   0x%08X\n", control_register);

    /* Disable interrupt */
    control_register = clear_register_bits(
        control_register,
        MOTOR_INTERRUPT
    );

    printf("After CLEAR: 0x%08X\n", control_register);

    return 0;
}


//--------------------------------------------------
/*
Output:



//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261120_12_clear_except_selected_bit.c -o o_clear_except_selected_bit

./o_clear_except_selected_bit

*/
//--------------------------------------------------


