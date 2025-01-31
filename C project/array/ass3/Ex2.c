#include <stdio.h>

int main()
{
	int  i;
	float numbers [6];
	float average, sum ,num  ;


	printf("Enter the numbers of data: ");
	scanf ("%f",&num );

	for (i = 0 ; i < num  ; i++)
	{
		printf (" Enter number:%d ", i+1);
		scanf ("%f", &numbers[i]);
		sum+= numbers[i];
	}
		average = sum/num ;
	printf("The Average = %f",average);

	return 0;
}
