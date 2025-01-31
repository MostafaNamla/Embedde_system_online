#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x ,y,sum;
   printf("Enter a integer  :");
   scanf ("%d%d",&x,&y);
   fflush(stdin); fflush(stdout);
   sum=x+y;
   printf("you entered:%d",sum);
   return 0;
}
