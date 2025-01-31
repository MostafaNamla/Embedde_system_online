#include <stdio.h>

int main()
{
	float Num_1, Num_2, Num_3;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &Num_1, &Num_2, &Num_3);


	if (Num_1 >= Num_2 && Num_1 >= Num_3)
		printf("the largest number is.%2f", Num_1);

	else if (Num_2 >= Num_1 && Num_2 >= Num_3)
		printf("the largest number is.%2f", Num_2);

	else
		printf("the largest number is.%2f", Num_3);

	return 0;
}
