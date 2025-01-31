
#include <stdio.h>

int main ()
{
	int number , sum = 0;	

	printf ("Enter a number to : ") ;	
	scanf ("%d", number) ;				

	for (number = 0 ; number <= 100 ;number++)
	{
		sum += number ;				
	}
	printf ("the sum:%d", sum);
	return 0;
}
