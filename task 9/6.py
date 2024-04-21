import math


def calculate_square_root(number):
    try:
        # Check if the number is negative
        if number < 0:
            return ValueError("Input must be a non-negative number.")

        # Calculate the square root
        square_root = math.sqrt(number)
        return square_root
    except ValueError as ve:
        print("Error:", ve)
        return None


def main():
    # Prompt the user to enter a number
    try:
        num = float(input("Enter a number: "))
    except ValueError:
        print("Error: Please enter a valid number.")
        return

    # Calculate the square root
    result = calculate_square_root(num)
    if result is not None:
        print("The square root of", num, "is:", result)


if __name__ == "__main__":
    main()
