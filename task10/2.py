import math #we call math module to use one of its functions

def round_the_number(num): # we defain the function we want to make
    return math.floor(num) #we call the function we want from math which can aproximat the float num to the <= integar num

float_num = float(input("Enter a number: ")) # we make variable to get the input value from the user
rounded_num = round_the_number(float_num) #calling the function we made
print(rounded_num) #print the resulte of the function
