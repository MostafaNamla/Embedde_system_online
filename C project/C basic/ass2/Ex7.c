#include <stdio.h>

int main()
{
	
	int number , count;
    int factorial=1;

	printf("Enter an integer number: ");
	scanf("%d", &number);

	if(number>0){
	    for(count=1; count <= number; count++)
				factorial*= count;
        printf("Factorial = %d\n", factorial);


		}
    else
    printf("Error!!! Factorial of negative number does not exist.");

	return 0;
}
