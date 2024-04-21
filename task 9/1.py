#make list of numbers
list1=[5 , 7 ,7 , 8 , 8 , 8 , 10]
even_num  , odd_num = 0 , 0
for x in list1:
 # make checking condition
 if x % 2 == 0:
  even_num += 1

else:
    odd_num += 1
    #print the result 
    print(" even number = ", even_num)