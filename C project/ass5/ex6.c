#include <stdio.h>

union job					// Define a union
{
	char name [32] ;
	float salary;
	int worker_no;
} U;

struct S_job				// Define a structure
{
	char name [32];
	float salary;
	int worker_no;
} S;



int main ()
{
	// print the size of union and structure
	printf ("Size of the union is: %d", sizeof (U));
	printf ("\nSize of the structure is: %d", sizeof (S));

	return 0;
}
