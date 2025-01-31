#include <stdio.h>
//finds the largest value of the three given values
int main(){
    float num1,num2,num3;


    printf("Enter three number :");
    scanf("%f%f%f",&num1,&num2,&num3);
    fflush(stdin) ; fflush(stdout) ;

    if(num1>num2 && num1>num3){

        printf(" The largest number 1:%f\n  ",num1);
    }
    else if(num2>num1 && num2>num3){

        printf(" The largest number 2 :%f\n ",num2);
    }

    else{
        printf("The largest number  3 :%f ",num3);
    }




}