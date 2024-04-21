import csv

movies = {
    "Star Wars": 1977,
    "Inception": 2010,
    "The Godfather": 1972,
    "The Shawshank Redemption": 1994,
}

def write_to_file(output):
    with open(r'C:\task11\pythonProject1\r01.csv', 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(["name", "date"])  # Writing header
        writer.writerows(output)

def read_from_file():
    data = []
    with open(r'C:\task11\pythonProject1\r01.csv', "r") as f:
        reader = csv.reader(f)
        next(reader)  # Skip the header row
        for line in reader:
            data.append(line)
    return data

# Write data to file
write_to_file(movies.items())

# Read data from file
data = read_from_file()
for item in data:
    print(f"name: {item[0]}, date: {item[1]}")


