def max_distance_same_numbers(lst):
    max_distance = 0
    num_index = {}

    for i, num in enumerate(lst):
        if num not in num_index:
            num_index[num] = i
        else:
            distance = i - num_index[num]
            if distance > max_distance:
                max_distance = distance

    return max_distance

# Example usage:
input_list = [2, 5, 3, 4, 5, 2]
result = max_distance_same_numbers(input_list)
print("Maximum distance between the same numbers in the list:", result)
