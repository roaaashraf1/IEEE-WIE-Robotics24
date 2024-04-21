#include <stdio.h>
void main (void) {
    //declare variable and makeone of them as constant
    float  r,cir;
    const float pi= 3.14159;

    // ask user for radius
    printf("please enter the radius:");
    scanf("%f",&r);

    //calculate circumference
    cir = r*2*pi;
    printf("the circumference =%f",cir);

}
