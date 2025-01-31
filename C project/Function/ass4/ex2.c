#include <stdio.h>

int factorial (int n){

    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}
int main(){
    int number ;
    printf("Enter number of the factorial :");
    scanf("%d",&number);
    if(number<0){
        printf("The factorial Number not defined ");
    }
    else
        printf("The factorial Number of %d defined :%d\n\r  ",number,factorial(number));

}
