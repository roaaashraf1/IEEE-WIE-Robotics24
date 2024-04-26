#include <stdio.h>
void byrefer(int *px,int *py);
void byvalue(int a, int b);
void main (void)
{
    int x =10;
    int y=5;
    byrefer(&x,&y);//we call the function and send the address of the two variables
    byvalue(x,y);//we call the function and send the variable
}
void byrefer(int *px,int *py)// we make function take the address and call it by reference using pointer
{
printf("the value of x:%d\n",*px);//we print the value by the pointer
*px=*py;// change the value of the variables by their pointers
printf("the value of x:%d\n",*px);
}
void byvalue(int a, int b)//we make function to print the sumaition of two numbers & call it by the value
{
 int sum=a+b;
 printf("the sumaition of %d&%d is:%d",a,b,sum );
}
