#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

#define PERIPHERAL_BASE  0xFE000000
#define GPIO_BASE        (PERIPHERAL_BASE + 0x200000)
#define BLOCK_SIZE       4096

volatile uint32_t *gpio;

// GPIO register offsets
#define GPFSEL1   1
#define GPSET0    7
#define GPCLR0    10
#define GPLEV0    13

void gpio_init()
{
    int mem_fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (mem_fd < 0) {
        perror("open");
        exit(1);
    }

    gpio = (uint32_t *)mmap(
        NULL,
        BLOCK_SIZE,
        PROT_READ | PROT_WRITE,
        MAP_SHARED,
        mem_fd,
        GPIO_BASE
    );

    close(mem_fd);

    if (gpio == MAP_FAILED) {
        perror("mmap");
        exit(1);
    }
}

void set_gpio_input(int pin)
{
    gpio[GPFSEL1] &= ~(7 << ((pin % 10) * 3));
}

void set_gpio_output(int pin)
{
    gpio[GPFSEL1] &= ~(7 << ((pin % 10) * 3));
    gpio[GPFSEL1] |=  (1 << ((pin % 10) * 3));
}

int read_gpio(int pin)
{
    return (gpio[GPLEV0] & (1 << pin)) ? 1 : 0;
}

void write_gpio(int pin, int value)
{
    if (value)
        gpio[GPSET0] = (1 << pin);
    else
        gpio[GPCLR0] = (1 << pin);
}

int main()
{
    int button = 17;
    int led = 27;

    gpio_init();

    set_gpio_input(button);
    set_gpio_output(led);

    printf("Polling started...\n");

    while (1)
    {
        if (read_gpio(button))
            write_gpio(led, 1);
        else
            write_gpio(led, 0);
    }

    return 0;
}
