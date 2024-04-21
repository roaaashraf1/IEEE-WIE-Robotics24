from bisect import bisect_left, bisect_right

def sort_the_target(nums, target):
    first_index = bisect_left(nums, target)
    last_index = bisect_right(nums, target) -1
    if first_index <= last_index:
        return [first_index, last_index]


nums = [5, 7, 7, 8, 8, 8, 10]
target = 8
result = sort_the_target(nums, target)
print(result)  # Output: [3, 5]
