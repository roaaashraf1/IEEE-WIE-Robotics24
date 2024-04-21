n=int(input ("Enter the number:"))
result =1
if n<0:
    print("The number is negative has no factorial")
elif n==0 or n==1:
    print( "The result = 1")

for i in range (2, n+1):
    result*=i
if n>1:
    print(" the factorial of ",n,"is ",result)