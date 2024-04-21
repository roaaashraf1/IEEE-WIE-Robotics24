the_list = [1,2,3,4,2,3,5,6,6,7,9,0,8,9,0,7]

# To remove duplicates using set and convert back to list
unique_list = list(set(the_list))
print ("the list:",the_list)
print("After removing the duplicates:",unique_list)
list1= input("please enter list of numbers:")
list1 = list(map(int, list1.split()))
unique_list1 = list(set(list1))
print("After removing the duplicates:",unique_list1)