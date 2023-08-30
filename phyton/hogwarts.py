import csv

with open("Hogwarts.csv", "r") as file:
    reader = csv.DictReader(file)

    counts = {}
    header = input("Search: ")

    for row in reader:
        favorite = row[header]
        if favorite in counts:
            counts[favorite] = counts[favorite] + 1
        else:
            counts[favorite] = 1

for favorite in sorted(counts, key=lambda language: counts[language]):
    print(f"{favorite}: {counts[favorite]}")