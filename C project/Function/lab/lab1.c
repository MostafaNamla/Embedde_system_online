#include <stdio.h>
#include <string.h>


int factorial (int x) ;

int main ()
{

	printf ("\r\nThe factorial of (%d) is: %d", 10, factorial(10)) ;
	printf ("\r\nThe factorial of (%d) is: %d", 0, factorial(0)) ;
	printf ("\r\nThe factorial of (%d) is: %d", 5, factorial(5)) ;

	return 0;
}



int factorial (int x)
{
        int f=1;
		for (; x>1 ; x--)
		{
			f *= x;
		}

	return f ;
}