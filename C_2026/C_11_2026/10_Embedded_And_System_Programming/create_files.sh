#!/bin/bash

files=(
    "c_20261128_01_set_clear_hardware_register_bits.c"
    "c_20261128_02_read_hardware_status_register.c"
    "c_20261128_03_update_gpio_configuration_bits.c"
    "c_20261128_04_set_interrupt_enable_bits.c"
    "c_20261128_05_clear_interrupt_pending_bits.c"
    "c_20261128_06_configure_multiple_register_fields.c"
    "c_20261128_07_register_read_modify_write.c"
    "c_20261128_08_implement_flag_registers.c"
    "c_20261128_09_implement_event_flags.c"
    "c_20261128_10_implement_permission_flags.c"
    "c_20261128_11_implement_device_capability_flags.c"
    "c_20261128_12_bitmaps_for_resource_allocation.c"
    "c_20261128_13_volatile_register_access.c"
    "c_20261128_14_atomic_bit_operations.c"
    "c_20261128_15_linux_kernel_bit_manipulation_apis.c"
)

created=0
skipped=0

for file in "${files[@]}"; do
    if [[ -e "$file" ]]; then
        echo "Already exists: $file"
        ((skipped++))
    else
        touch "$file"
        echo "Created: $file"
        ((created++))
    fi
done

echo
echo "Created: $created"
echo "Skipped: $skipped"
echo "Total: ${#files[@]}"

