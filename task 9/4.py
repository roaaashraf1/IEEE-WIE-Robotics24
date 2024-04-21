def divide_numbers(num1, num2):
    try:
        result = num1 / num2
        return result
    except ZeroDivisionError:
        return "Error: Division by zero is not allowed."
num1= int( input("Enter the first number:"))
num2 = int ( input("Enter the second number:" ))

print("the result is :", divide_numbers(num1 , num2))