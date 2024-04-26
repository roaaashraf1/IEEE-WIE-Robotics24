#include <stdio.h>
void main (void)
{
    float x[40];
    float y ;
    int n,i,p,mid,lw,up;
    printf("please enter the size of the data>40:");//ask the user for the size of the array
    scanf("%d",&n);
    for(i=0;i<n;i++)//for loop to enter the data
    {
        printf("the value of %d:",i);
        scanf("%f",&x[i]);
    }
    printf("please enter the value u r searching for its position:");
    scanf("%f",&y);
    p=-1;
    lw=0;
    up=n-1;
    do //make loop to search by bineary
    {
      mid=(lw+up)/2;
      if(y==x[mid])
      {
          p=mid ;
          break;
      }
      else if(y>x[mid])

          lw=mid+1;

      else
         up=mid-1;
    }
    while(lw<=up);
    if(p==-1)
    {
        printf("%f is not found in the data",y);
    }
    else
        printf("%.1f is located in the data & its position is :%d",y,p);

}
