#include<stdio.h>
void main (void) {
    //declare two variables
    int x ,y ;
    float sum , sub , multip, divi ;

    //ask the user to enter the values

    printf("please enter the first number :");
    scanf("%d",&x);
    printf("please enter the second number :");
    scanf("%d", &y) ;

    //preforms arithmetic operations
    sum =x+y;
    sub=x-y;
    multip=x*y;
    divi= x/y;
    int remi=x%y;

    //print the results

    printf("sumation=%.1f\n",sum);
    printf("subtraction=%.1f\n",sub);
    printf("multiplication=%.1f\n",multip);
    printf("division=%.1f\n",divi);
    printf("reminder=%d\n",remi);
}
