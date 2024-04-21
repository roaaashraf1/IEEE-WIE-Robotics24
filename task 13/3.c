#include<stdio.h>
void main (void){
int arr[5];//declare array
int i=0;
printf( "enter 5 numbers :");//ask user for input
while(i<5){//while loop for scanning input from user
scanf("%d",&arr[i]);
i++ ;}

printf("the output is :");
    for( i=0;i<5;i++)// for loop for printing the out put separated with space
    printf("%d\t",arr[i]);
}
