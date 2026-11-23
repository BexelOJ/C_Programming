
local files = {
    "01_bitmap_using_integer",
    "02_bitmap_using_array",
    "03_set_bitmap_position",
    "04_clear_bitmap_position",
    "05_toggle_bitmap_position",
    "06_check_bitmap_position",
    "07_find_first_free_bit",
    "08_find_first_occupied_bit",
    "09_find_consecutive_free_bits",
    "10_allocate_bit_range",
    "11_release_bit_range",
    "12_find_duplicates_using_bitmap",
    "13_find_missing_numbers_using_bitmap",
    "14_resource_allocator_using_bitmap",
    "15_memory_block_bitmap"
}

local renamed = 0
local skipped = 0

for _, name in ipairs(files) do
    local old_file = "c_20261125_" .. name .. ".c"
    local new_file = "c_20261126_" .. name .. ".c"

    local existing = io.open(new_file, "r")

    if existing then
        existing:close()
        print("Skipped: " .. new_file)
        skipped = skipped + 1
    else
        local success, err = os.rename(old_file, new_file)

        if success then
            print("Renamed: " .. old_file .. " -> " .. new_file)
            renamed = renamed + 1
        else
            print("Failed: " .. old_file .. ": " .. tostring(err))
        end
    end
end

print("\nRenamed: " .. renamed)
print("Skipped: " .. skipped)



