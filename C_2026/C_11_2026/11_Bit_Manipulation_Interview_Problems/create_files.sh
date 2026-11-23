#!/bin/bash

files=(
    "c_20261129_01_unique_element_in_array.c"
    "c_20261129_02_two_unique_elements_in_array.c"
    "c_20261129_03_missing_integer_in_sequence.c"
    "c_20261129_04_duplicate_integer_in_array.c"
    "c_20261129_05_maximum_xor_pair.c"
    "c_20261129_06_minimum_xor_pair.c"
    "c_20261129_07_single_number_appearing_once.c"
    "c_20261129_08_single_number_appearing_once_among_triplets.c"
    "c_20261129_09_bits_to_flip_to_convert_a_to_b.c"
    "c_20261129_10_closest_integer_same_set_bits.c"
    "c_20261129_11_largest_power_of_two_less_than_or_equal_n.c"
    "c_20261129_12_longest_sequence_consecutive_set_bits.c"
    "c_20261129_13_longest_run_alternating_bits.c"
    "c_20261129_14_maximum_number_by_flipping_one_bit.c"
)

created=0
skipped=0

for file in "${files[@]}"; do
    if [[ -e "$file" ]]; then
        echo "Already exists: $file"
        ((skipped++))
    else
        touch "$file" && {
            echo "Created: $file"
            ((created++))
        }
    fi
done

echo
echo "Created: $created"
echo "Skipped: $skipped"
echo "Total: ${#files[@]}"


