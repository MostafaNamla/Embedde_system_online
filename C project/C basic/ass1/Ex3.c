#include <stdio.h>

int main()
{
   float x ,y ,mult;

   printf("Enter two numbers  :");
   fflush(stdout);
   scanf ("%f %f",&x ,&y);
   fflush(stdin);
   mult =x*y ;
   printf("product : %f ",mult);
   return 0;
}

