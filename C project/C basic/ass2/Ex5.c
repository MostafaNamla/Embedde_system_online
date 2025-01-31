#include <stdio.h>


int main()
{
	char CH;									

	printf("Enter a character: ");				
	scanf("%c",&CH);

	if( (CH>='a' && CH<='z') || (CH>='A' && CH<='Z'))		
		printf("The %c is an Alphabet.", CH);				
	else
		printf("The %c is not an Alphabet.", CH);			
	return 0;
}