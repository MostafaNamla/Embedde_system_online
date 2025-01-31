#include <stdio.h>

int main(){
    int num1,num2;
    float a[3][3];
    float t[3][3];
    for(num1=0;num1<3;num1++){
        for(num2=0;num2<3;num2++){
            printf("Enter item(%d%d):",num1,num2);
            scanf("%f",&a[num1][num2]);
        }
    }
    printf("the matrix is:\n");
    for(num1=0;num1<3;num1++){
        for(num2=0;num2<3;num2++){
            printf("%f\t",a[num1][num2]);
        }
        printf("\r\n");
    }
      printf("the transpose matrix is:\n");
    for(num1=0;num1<3;num1++){
        for(num2=0;num2<3;num2++){
            t[num1][num2]=a[num2][num1];
            printf("%f\t",t[num1][num2]);
        }
        printf("\r\n");
    }


}