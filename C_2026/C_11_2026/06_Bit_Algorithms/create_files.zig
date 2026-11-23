
const std = @import("std");

pub fn main(init: std.process.Init) !void {
    const io = init.io;
    const cwd = std.Io.Dir.cwd();

    const files = [_][]const u8{
        "c_20261124_01_swap_integers_using_xor.c",
        "c_20261124_02_reverse_all_bits.c",
        "c_20261124_03_reverse_bits_in_range.c",
        "c_20261124_04_rotate_bits_left.c",
        "c_20261124_05_rotate_bits_right.c",
        "c_20261124_06_isolate_rightmost_set_bit.c",
        "c_20261124_07_clear_rightmost_set_bit.c",
        "c_20261124_08_find_rightmost_unset_bit.c",
        "c_20261124_09_swap_adjacent_bits.c",
        "c_20261124_10_swap_odd_even_bits.c",
        "c_20261124_11_reverse_byte_order.c",
        "c_20261124_12_binary_palindrome.c",
        "c_20261124_13_complement_of_number.c",
        "c_20261124_14_generate_bitwise_mask_range.c",
        "c_20261124_15_find_single_set_bit_position.c",
    };

    var created: usize = 0;

    for (files) |filename| {
        const file = cwd.createFile(io, filename, .{
            .exclusive = true,
        }) catch |err| {
            if (err == error.PathAlreadyExists) {
                std.debug.print("Exists: {s}\n", .{filename});
                continue;
            }
            return err;
        };

        file.close(io);
        std.debug.print("Created: {s}\n", .{filename});
        created += 1;
    }

    std.debug.print("\nTotal created: {d}\n", .{created});
}
