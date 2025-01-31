#include <stdio.h>
#include <stdlib.h>

int main()
{
   int test;
   printf("Enter a integer  :");
   fflush(stdin);
   fflush(stdout);
   scanf ("%d",&test);
   printf("you entered: %d", test);
   return 0;
}
