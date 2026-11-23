from pathlib import Path

files = Path(".").glob("c_20261120_*.c")

count = 0

for old_path in files:
    new_name = old_path.name.replace("20261120", "20261121", 1)
    new_path = old_path.with_name(new_name)

    if new_path.exists():
        print(f"Skipped (destination exists): {new_name}")
        continue

    old_path.rename(new_path)
    print(f"Renamed: {old_path.name} -> {new_name}")
    count += 1

print(f"\nTotal files renamed: {count}")
