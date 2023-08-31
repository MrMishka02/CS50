import csv


db = SQL("sqlite:///Hogwarts.db")

house = input("House: ")

rows = db.execute("SELECT COUNT(*) FROM Hogwarts WHERE House LIKE ?",
                  "%" + house + "%")
row = rows[0]

print(row["COUNT(*)"])