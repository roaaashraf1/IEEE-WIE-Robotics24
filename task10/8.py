import statistics

# Input list of numbers
num_list = [float(x) for x in input("Enter the list of numbers : ").split()]

# Calculate the average
avg = statistics.mean(num_list)

# Print the average with 6 digits after the decimal point
print("Average:", '{:.6f}'.format(avg))
