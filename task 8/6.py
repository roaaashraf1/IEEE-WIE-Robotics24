def find_max_min(list):


    max_num = list[0]
    min_num = list[0]

    for num in list[0:]:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
    return max_num, min_num



the_list = input("Enter the numbers:")
the_list = list(map(int, the_list.split()))

max_num,min_num=find_max_min(the_list)

print("Maximum element:",max_num)
print("Minimum element:",min_num)