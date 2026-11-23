
package main

import (
	"fmt"
	"os"
)

func main() {
	files := []string{
		"c_20261127_01_generate_gray_code.c",
		"c_20261127_02_binary_to_gray_code.c",
		"c_20261127_03_gray_code_to_binary.c",
		"c_20261127_04_generate_subsets_using_bitmasks.c",
		"c_20261127_05_enumerate_all_submasks.c",
		"c_20261127_06_enumerate_supermasks.c",
		"c_20261127_07_two_non_repeating_numbers.c",
		"c_20261127_08_single_non_repeating_number.c",
		"c_20261127_09_non_repeating_number_among_triplets.c",
		"c_20261127_10_missing_number_using_xor.c",
		"c_20261127_11_find_duplicate_using_bits.c",
		"c_20261127_12_maximum_xor_two_array_elements.c",
		"c_20261127_13_maximum_xor_subarray.c",
		"c_20261127_14_binary_trie_xor_queries.c",
		"c_20261127_15_subset_sum_using_bitset.c",
	}

	created := 0
	skipped := 0

	for _, filename := range files {
		file, err := os.OpenFile(
			filename,
			os.O_WRONLY|os.O_CREATE|os.O_EXCL,
			0644,
		)

		if err != nil {
			if os.IsExist(err) {
				fmt.Println("Already exists:", filename)
				skipped++
			} else {
				fmt.Println("Failed:", filename, err)
			}
			continue
		}

		file.Close()
		fmt.Println("Created:", filename)
		created++
	}

	fmt.Printf("\nCreated: %d\nSkipped: %d\nTotal: %d\n",
		created, skipped, len(files))
}


