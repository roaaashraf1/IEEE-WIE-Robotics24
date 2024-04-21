def three_sum_indices(nums, target):
    n = len(nums)
    for X in range(n - 2):
     for Y in range( n - 1):
       for Z in range( n ):
                if nums[Y] + nums[X] + nums[Z] == target:
                    return X, Y, Z
    return None

# Example usage:
nums = [1, 3, 5, 6, 9]
target = 9
result = three_sum_indices(nums, target)
print(result)
