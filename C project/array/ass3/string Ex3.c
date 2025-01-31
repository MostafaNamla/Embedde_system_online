#include <stdio.h>
#include <string.h>

int main ()
{

	char c [100] ,reverse[100];

	int  i, length ;
	printf ("Enter a string: ");
	fflush(stdin); fflush(stdout);
	scanf ("%[^\n]%*c",&c);


   length = strlen(c);
	for (int i=0; i<length ; i++)
	{
		reverse [i] = c[length-i-1] ;	// reverse the string
	}

	reverse[length]= 0;

	printf("\nThe entered string is: %s\nThe reversed string is:  %s",c,reverse );

	return 0;
}
