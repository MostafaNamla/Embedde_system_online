#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num ;
    printf("Enter Number of :  ");
    scanf ("%d",&num );
    fflush(stdin); fflush(stdout);
    if(num%2==0)
        printf("The even Number %.2d",num);
    else
        printf("The odd Number %.2d",num);

    return 0;

}
