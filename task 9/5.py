def calculate_average(numbers):
    # Check if the input is a list
    if not isinstance(numbers, list):
        print("Error: Input must be a list.")
        return None

    # Check if the list is empty
    if len(numbers) == 0:
        print("Error: Input list is empty.")
        return None

    # Calculate the average
    total = sum(numbers)
    average = total / len(numbers)
    return average


def main():
    # ask the user to enter a list of numbers
    try:
        num_list = input("Enter a list of numbers : ").split()
        num_list = [float(num) for num in num_list]
    except ValueError:
        print("Error: Please enter valid numbers.")
        return

    # Calculate the average
    average = calculate_average(num_list)
    if average is not None:
        print("The average is:", average)


if __name__ == "__main__":
    main()

