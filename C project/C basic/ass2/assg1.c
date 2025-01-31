#include <stdio.h>

int main()
{
    int number ;
    printf("Enter Number of :  ");
    scanf ("%f ",&number );
    if(number%2==0)
        printf("The even Number %d",number);
    else
        printf("The odd Number %d",number);


    return 0;

}
