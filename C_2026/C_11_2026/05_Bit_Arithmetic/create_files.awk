BEGIN {
    files[1]  = "c_20261123_01_add_without_plus.c"
    files[2]  = "c_20261123_02_subtract_without_minus.c"
    files[3]  = "c_20261123_03_multiply_by_2_using_shift.c"
    files[4]  = "c_20261123_04_divide_by_2_using_shift.c"
    files[5]  = "c_20261123_05_multiply_using_bitwise.c"
    files[6]  = "c_20261123_06_divide_using_bitwise.c"
    files[7]  = "c_20261123_07_increment_using_bitwise.c"
    files[8]  = "c_20261123_08_decrement_using_bitwise.c"
    files[9]  = "c_20261123_09_absolute_value_using_bitwise.c"
    files[10] = "c_20261123_10_average_using_bitwise.c"
    files[11] = "c_20261123_11_min_max_without_comparison.c"
    files[12] = "c_20261123_12_detect_overflow_in_addition.c"

    for (i = 1; i <= 12; i++) {
        if (system("test -e \"" files[i] "\"") == 0) {
            print "Already exists: " files[i]
        } else {
            if (system("touch \"" files[i] "\"") == 0) {
                print "Created: " files[i]
                count++
            } else {
                print "Failed: " files[i]
            }
        }
    }

    print "\nTotal files created: " count
    exit
}



