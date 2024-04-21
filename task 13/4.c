#include <stdio.h>
void main(void) {
int arr[3][3];
int r=0 ,c=0 ,i=1 ;
while (r<3){
        c=0;
    while (c<3){
         arr[r][c]=i;
         i++;
         c++;
    }
    r++;
}
printf("output:\n");
for(r=0;r<3;r++){
    for(c=0;c<3;c++){
    printf("%3d",arr[r][c]);
    }
    printf("\n");
}

}
