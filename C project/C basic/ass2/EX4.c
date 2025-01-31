
#include <stdio.h>

int main()
{
	int Num_1;
	printf("Enter numbers: ");
	scanf("%d",&Num_1);


	if (Num_1 >0)
		printf("the pastive number is.%2d", Num_1);

	else if (Num_1 <0)
		printf("the Nagative number is.%2d", Num_1);

	else
		printf("the zero number is.%2d", Num_1);

	return 0;
}
