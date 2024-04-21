#include <stdio.h>
float average(int num[],int n);
void main(void){
int num[]={5,8,4,2,9};//declare array
int n=5; //declare the size of the array
float av = average(num,n);// call the function and print the result
printf("the average of  the array is :%f",av);
}
float average(int num[],int n){// make function to calculate average of array
int sum=0;
int i;
for (i=0;i<n;i++){//for loop to sum the numbers of the array
    sum+=num[i];
}
float result =(float) sum/n;
return result;
}
