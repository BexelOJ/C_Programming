from pathlib import Path

files = [
    "c_20261120_01_create_bit_mask.c",
    "c_20261120_02_extract_particular_bit.c",
    "c_20261120_03_extract_consecutive_bits.c",
    "c_20261120_04_insert_value_bit_field.c",
    "c_20261120_05_clear_bit_field.c",
    "c_20261120_06_update_bit_field.c",
    "c_20261120_07_extract_upper_lower_nibbles.c",
    "c_20261120_08_extract_high_low_bytes.c",
    "c_20261120_09_combine_two_8bit_values.c",
    "c_20261120_10_combine_two_16bit_values.c",
    "c_20261120_11_extract_bytes_from_32bit.c",
    "c_20261120_12_register_control_bits.c"
]

for filename in files:
    Path(filename).touch()
    print(f"Created: {filename}")

print(f"\nTotal files created: {len(files)}")



