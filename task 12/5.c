#include <stdio.h>
void main (void) {
    int x,i=1;
    long facto=1;
    // ask the user to input number

    printf("please enter the number :");
    scanf("%d",&x);

    // make while loop to calculate the factorial of the number

    while(i<=x){
        facto*=i;
        i++;
    }
    printf("the factorial of the number %d=%ld",x,facto);
}
