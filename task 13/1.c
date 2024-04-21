#include <stdio.h>
int divisible(int a,int b);//define the function
void main(void){
int a,b;//declare the variable
printf("please enter two numbers :");// ask the user to enter two number
scanf("%d %d", &a,&b);

int x=divisible(a,b);//call the function & save the return result in variable
if(x==1)// make if condition to print the result
    printf("%d is divisible by %d:%d\n",a,b,a/b);
else
printf ("%d  is not divisible by %d",a,b);
}
int divisible(int a,int b){// declare a function to check if the num1 is divisible by num2
if(a%b==0)
    return 1;// is divisible
else
    return 0;// is not divisible
}
