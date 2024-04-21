#include <stdio.h>
void main (void) {
    // declare varibles
    int A, B, i;
     // ask the user for the limit numbers

    printf("enter the start number (A) : ");
    scanf("%d",&A);

    printf("enter the end number (B): ");
    scanf("%d",&B);

    //make the for loop
    for(i=A ;i<=B ;i++){
        printf("%d\n",i);
    }
}
