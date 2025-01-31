#include <stdio.h>
int main(){
    float a[2][2],b[2][2], sum;
    int i,j;
    printf("enter the element 1st matrix:\n\r");
    for (i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf("enter the element a%d%d:",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
    printf("enter the element 2st matrix:\n\r");

    for (i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf("enter the element b%d%d:",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
    printf("sum of matrix:\n");
    for (i=0; i<2;i++){
        for(j=0; j<2; j++){
            sum=a[i][j]+b[i][j];
            printf("\t%f",sum);
        }
         printf("\n\r");
    }






}