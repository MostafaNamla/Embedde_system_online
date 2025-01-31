#include <stdio.h>

int main()
{
    float x ,y ,swa ;

    printf("Enter value of a :  ");
    scanf ("%f ",&x );
    printf("Enter value of b : ");
    scanf ("%f ",&y );
    printf("after swapping value of a=  %.2f \n",y);
	swa=x ;
	x=y;
	y=swa;
    printf("after swapping value of b=  %.2f",x);

    return 0;
}

