import csv

search_word = input("Which word are you loogking for?:")
column_index = int(input("Which column index are you looking for?(please start from 0 ):"))

file_path = input("Enter the file path:")

count = 0
matching_rows = []

with open(file_path, mode='r', encoding='utf-8') as file:
    reader = csv.reader(file)
    header = next(reader)
    for row in reader:
        if search_word in row[column_index]:
            matching_rows.append(row)
            count += 1

for row in matching_rows:
    print(row)

print(f"Total {count} lines found with '{search_word}' in column {column_index}.")