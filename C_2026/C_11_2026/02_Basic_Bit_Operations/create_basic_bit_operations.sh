#!/bin/bash

#DIR="02_Basic_Bit_Operations"

#mkdir -p "$DIR"

files=(
    "c_20261120_01_set_bit.c"
    "c_20261120_02_clear_bit.c"
    "c_20261120_03_toggle_bit.c"
    "c_20261120_04_check_bit.c"
    "c_20261120_05_set_multiple_bits.c"
    "c_20261120_06_clear_multiple_bits.c"
    "c_20261120_07_toggle_multiple_bits.c"
    "c_20261120_08_update_bit.c"
    "c_20261120_09_update_bit_range.c"
    "c_20261120_10_find_lsb.c"
    "c_20261120_11_find_msb.c"
    "c_20261120_12_clear_except_selected_bit.c"
    "c_20261120_13_even_odd_using_bits.c"
    "c_20261120_14_power_of_two.c"
    "c_20261120_15_next_power_of_two.c"
    "c_20261120_16_previous_power_of_two.c"
)

for file in "${files[@]}"; do
    touch "$file"
done

echo "Basic Bit Operations files created successfully!"

#ls -l "$DIR"



