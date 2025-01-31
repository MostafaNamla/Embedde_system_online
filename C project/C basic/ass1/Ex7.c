
#include <stdio.h>

int main()
{
	float x, y;						

	printf("Enter the first value: ");				
	scanf("%f", &x);							
	fflush(stdin);	fflush(stdout);

	printf("\r\nEnter the second value: ");		
	scanf("%f", &y);							
	fflush(stdin);	fflush(stdout);

	printf("Before swap x=%f y=%f", x, y);
	fflush(stdout);
	x= x * y;
	y= x /y;
	x= x/ y;

	printf("\nAfter swap x=%f y=%f", x, y);
	return 0;
}
