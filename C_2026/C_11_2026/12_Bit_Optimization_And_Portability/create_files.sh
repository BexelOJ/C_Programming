
#!/bin/bash

files=(
    "c_20261130_01_compare_bit_counting_algorithms.c"
    "c_20261130_02_compare_loop_and_lookup_table.c"
    "c_20261130_03_portable_bit_count_function.c"
    "c_20261130_04_fixed_width_integer_types.c"
    "c_20261130_05_integer_promotions_bitwise_expressions.c"
    "c_20261130_06_portable_signed_right_shifts.c"
    "c_20261130_07_avoid_undefined_shift_operations.c"
    "c_20261130_08_understand_endianness.c"
    "c_20261130_09_implement_byte_swapping.c"
    "c_20261130_10_compiler_bit_operation_builtins.c"
    "c_20261130_11_c23_bit_manipulation_facilities.c"
)

created=0
skipped=0

for file in "${files[@]}"; do
    if [[ -e "$file" ]]; then
        echo "Already exists: $file"
        ((skipped++))
    elif touch "$file"; then
        echo "Created: $file"
        ((created++))
    else
        echo "Failed: $file"
    fi
done

echo
echo "Created: $created"
echo "Skipped: $skipped"
echo "Total: ${#files[@]}"


