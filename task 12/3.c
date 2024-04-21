#include <stdio.h>
void main (void) {
    //declare variable
    float num;
    //ask user for input number
    printf(" please enter a number :");
    scanf("%f",&num);

     //make if condition to know if the number is +ve or -ve or zero

      if( num > 0){
        printf("the number is positive");
      }
      else if( num < 0) {
        printf("the number is negative ");
      }
    else {
        printf("the number =zero");
    }

}
