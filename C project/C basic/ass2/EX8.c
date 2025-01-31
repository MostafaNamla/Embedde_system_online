#include "stdio.h"

int main()
{
    char operators;
    double  num_1,num_2 ;
    printf("Enter an operator (+, -, *, /) :");
    scanf("%c",&operators);
    printf("Enter two operands :");
    scanf("%lf%lf",&num_1,&num_2);
    fflush(stdin);fflush(stdout);
    switch(operators)
    {

    case'*':
        printf("%lf*%lf=%lf",num_1,num_2,num_1*num_2);
        break;
    case'/':
        printf("%lf/%lf=%lf",num_1,num_2,num_1/num_2);
        break;
    case'+':
        printf("%lf+%lf=%lf",num_1,num_2,num_1+num_2);
        break;
    case'-':
        printf("%lf-%lf=%lf",num_1,num_2,num_1-num_2);
        break;

    default :

        printf("error of operator ");
    }
    return 0;
}