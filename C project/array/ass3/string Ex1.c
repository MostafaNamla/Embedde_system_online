#include <stdio.h>
#include <string.h>

int main ()
{

	char c [100] ;
	char ch;
	int count=0, i, length ;
	printf ("Enter a string: ");
	fflush(stdin); fflush(stdout);
	scanf ("%[^\n]%*c",c);

	printf ("\r\nEnter a specific character: ");
	fflush(stdin); fflush(stdout);
	scanf ("%c",&ch);

	length = strlen(c);

	for (i=0 ; i<length ; i++)
	{
		if (c[i]==ch)
		{
			count+=1 ;
		}
	}

	if (count != 0)
		printf ("\r\nThe Frequency of character '%c' is %d.", ch, count );
	else
		printf ("\r\nThe character '%c' is not in the string.", ch);

	return 0;

}
