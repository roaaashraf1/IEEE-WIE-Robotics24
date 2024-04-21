input_list = ["apple", "lool"]
first_half_list = [string[:len(string)//2] for string in input_list]
second_half_list = [string[len(string)//2:] for string in input_list]
print("First half of each string:", first_half_list)
print("Second half of each string:", second_half_list)