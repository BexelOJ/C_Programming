
use std::fs::OpenOptions;
use std::io::ErrorKind;

fn main() {
    let files = [
        "c_20261125_01_create_structure_bit_fields.c",
        "c_20261125_02_declare_unsigned_bit_fields.c",
        "c_20261125_03_declare_signed_bit_fields.c",
        "c_20261125_04_access_modify_bit_fields.c",
        "c_20261125_05_bit_fields_vs_bit_masking.c",
        "c_20261125_06_register_structure_bit_fields.c",
        "c_20261125_07_fixed_size_bitset.c",
        "c_20261125_08_set_clear_toggle_bitset.c",
        "c_20261125_09_check_bits_bitset.c",
        "c_20261125_10_and_two_bitsets.c",
        "c_20261125_11_or_two_bitsets.c",
        "c_20261125_12_xor_two_bitsets.c",
        "c_20261125_13_complement_bitset.c",
        "c_20261125_14_union_intersection_bitsets.c",
        "c_20261125_15_count_set_bits_bitset.c",
        "c_20261125_16_find_first_available_bit.c",
    ];

    let mut created = 0;
    let mut skipped = 0;

    for filename in files {
        match OpenOptions::new()
            .write(true)
            .create_new(true)
            .open(filename)
        {
            Ok(_) => {
                println!("Created: {}", filename);
                created += 1;
            }
            Err(error) if error.kind() == ErrorKind::AlreadyExists => {
                println!("Already exists: {}", filename);
                skipped += 1;
            }
            Err(error) => {
                eprintln!("Failed: {}: {}", filename, error);
            }
        }
    }

    println!("\nCreated: {}", created);
    println!("Skipped: {}", skipped);
    println!("Total: {}", files.len());
}


