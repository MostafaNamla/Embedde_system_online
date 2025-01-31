#include <stdio.h>
#include <string.h>


int test (int j) ;

int main ()
{
    int j;

	test(j);
	return 0;

}

int test(int j)
{
        int i;
        for (i=0; i<=9 ; i++)
		{
		    for (j=i; j<=9 ; j++)
                printf("%d",j);
            printf("\n");
		}
}
