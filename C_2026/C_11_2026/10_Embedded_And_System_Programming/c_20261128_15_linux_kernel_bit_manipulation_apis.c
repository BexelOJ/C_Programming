#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/bitops.h>
#include <linux/bitmap.h>

#define TOTAL_RESOURCES 32

static DECLARE_BITMAP(resource_map, TOTAL_RESOURCES);

static int __init bitmap_init(void)
{
    unsigned long position;

    pr_info("Bitmap module loaded\n");

    // Initialize bitmap
    bitmap_zero(resource_map, TOTAL_RESOURCES);

    // Set bits
    set_bit(2, resource_map);
    set_bit(5, resource_map);

    // Check bit
    if (test_bit(2, resource_map))
        pr_info("Resource 2 is allocated\n");

    // Find first free bit
    position = find_first_zero_bit(
        resource_map,
        TOTAL_RESOURCES
    );

    pr_info("First free resource: %lu\n", position);

    // Atomically allocate a resource
    position = find_first_zero_bit(
        resource_map,
        TOTAL_RESOURCES
    );

    if (position < TOTAL_RESOURCES)
    {
        if (!test_and_set_bit(position, resource_map))
            pr_info("Allocated resource: %lu\n", position);
    }

    // Clear a bit
    clear_bit(2, resource_map);

    if (!test_bit(2, resource_map))
        pr_info("Resource 2 released\n");

    // Toggle a bit
    change_bit(5, resource_map);

    pr_info("Bitmap operations completed\n");

    return 0;
}

static void __exit bitmap_exit(void)
{
    bitmap_zero(resource_map, TOTAL_RESOURCES);

    pr_info("Bitmap module unloaded\n");
}

module_init(bitmap_init);
module_exit(bitmap_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Er Bexel O J");
MODULE_DESCRIPTION("Linux Kernel Bitmap Operations");


//--------------------------------------------------
/*
Output:

Bitmap module loaded
Resource 2 is allocated
First free resource : 0
Allocated resource : 0
Resource 2 released
Bitmap operations completed
Bitmap module unloaded

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261128_15_linux_kernel_bit_manipulation_apis.c -o o_linux_kernel_bit_manipulation_apis

./o_linux_kernel_bit_manipulation_apis

//--------------------------------------------------
Some important APIs :

Linux API : Purpose

set_bit() : Set a bit

clear_bit() : Clear a bit

change_bit() : Toggle a bit

test_bit() : Check a bit

test_and_set_bit() : 
Atomically set and return previous value

test_and_clear_bit() : 
Atomically clear and return previous value

find_first_zero_bit() : Find first zero bit

find_first_bit() : Find first set bit

bitmap_zero() : Clear a bitmap

bitmap_set() : Set a range of bits

bitmap_clear() : Clear a range of bits

*/
//--------------------------------------------------


