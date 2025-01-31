#include <stdio.h>
int main(){
    int i,j,row,cloumn;
    float a[2][3];
    float b[2][3];
    printf("enter rows of column of matrix :");
    scanf("%d%d",&row,&cloumn);
    printf("Enter element of matrix : \n");
    for(i=0 ;i<row;i++){
        for(j=0 ;j<cloumn;j++){
            printf("Enter element a%d%d:",i+1,j+1);
            scanf("%f",&a[i][j]);
            }

    }
    printf("Enterd matrix : \n");
    for(i=0 ;i<row;i++){
        for(j=0 ;j<cloumn;j++){

            printf("\t%f",a[i][j]);

        }
        printf("\n\r");
    }
    printf("transope of matrix : \n");
    for(i=0 ;i<row;i++){
        for(j=0 ;j<cloumn;j++){
            b[i][j]=a[i][j];
        }
    }
    for(i=0 ;i<row;i++){
        for(j=0 ;j<cloumn;j++){
            printf("\t%f",b[j][i]);
        }
        printf("\n\r");
    }



}