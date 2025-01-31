#include <stdio.h>
//Calculate Circle Area or Circumference
int main(){
    float raduis;
    float area,circumference;
    char name;

    printf("Enter circle raduis :");
    scanf("%f",&raduis);
    fflush(stdin) ; fflush(stdout) ;

    printf("Enter your choice  :");
    scanf("%c",&name);
    fflush(stdin) ; fflush(stdout) ;fflush(stdin) ; fflush(stdout) ;
    if(name=='a'){
        area=3.14*raduis*raduis;
        printf(" area is  =%f\n  ",area);
    }
    else if(name=='c'){
        circumference=3.14*2*raduis;
        printf(" circumference  is %f\n ",circumference);
    }

    else{
        printf("error number ");
    }




}