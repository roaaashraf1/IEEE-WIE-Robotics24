def uniq_elements(input_list):

    unique_list = []
    for x in input_list:
        is_unique = True
        # Check if x is already in unique_list
        for i in range(len(unique_list)):
            if x  == unique_list[i]:
                is_unique = False
                break
        # If x is unique, add it to unique_list
        if is_unique:
            unique_list += [x ]
    return unique_list
input_list=[5 , 7 , 7 ,8 , 8 , 8 ,10]
the_uniq_list = uniq_elements(input_list)
print("the uniq elements are :" , the_uniq_list)
