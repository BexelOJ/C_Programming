
#!/usr/bin/perl

use strict;
use warnings;

my @files = (
    "c_20261120_01_count_set_bits.c",
    "c_20261120_02_count_unset_bits.c",
    "c_20261120_03_count_bits_brian_kernighan.c",
    "c_20261120_04_count_bits_lookup_table.c",
    "c_20261120_05_find_first_set_bit.c",
    "c_20261120_06_find_last_set_bit.c",
    "c_20261120_07_count_trailing_zeros.c",
    "c_20261120_08_count_leading_zeros.c",
    "c_20261120_09_exactly_one_set_bit.c",
    "c_20261120_10_exactly_two_set_bits.c",
    "c_20261120_11_check_alternating_bits.c",
    "c_20261120_12_calculate_even_odd_parity.c",
    "c_20261120_13_find_integer_parity.c",
    "c_20261120_14_calculate_hamming_weight.c",
    "c_20261120_15_hamming_distance.c"
);

foreach my $file (@files)
{
    if (open(my $fh, '>>', $file))
    {
        close($fh);
        print "Created: $file\n";
    }
    else
    {
        warn "Failed to create $file: $!\n";
    }
}

print "\nTotal files processed: " . scalar(@files) . "\n";

