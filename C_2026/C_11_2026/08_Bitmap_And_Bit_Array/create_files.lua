
local files = {
    "c_20261125_01_bitmap_using_integer.c",
    "c_20261125_02_bitmap_using_array.c",
    "c_20261125_03_set_bitmap_position.c",
    "c_20261125_04_clear_bitmap_position.c",
    "c_20261125_05_toggle_bitmap_position.c",
    "c_20261125_06_check_bitmap_position.c",
    "c_20261125_07_find_first_free_bit.c",
    "c_20261125_08_find_first_occupied_bit.c",
    "c_20261125_09_find_consecutive_free_bits.c",
    "c_20261125_10_allocate_bit_range.c",
    "c_20261125_11_release_bit_range.c",
    "c_20261125_12_find_duplicates_using_bitmap.c",
    "c_20261125_13_find_missing_numbers_using_bitmap.c",
    "c_20261125_14_resource_allocator_using_bitmap.c",
    "c_20261125_15_memory_block_bitmap.c"
}

local created = 0
local skipped = 0

for _, filename in ipairs(files) do
    local existing = io.open(filename, "r")

    if existing then
        existing:close()
        print("Already exists: " .. filename)
        skipped = skipped + 1
    else
        local file, err = io.open(filename, "w")

        if file then
            file:close()
            print("Created: " .. filename)
            created = created + 1
        else
            print("Failed: " .. filename .. ": " .. err)
        end
    end
end

print("\nCreated: " .. created)
print("Skipped: " .. skipped)
print("Total: " .. #files)
