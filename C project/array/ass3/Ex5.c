#include <stdio.h>

int main(){
  int i,a[10],num,element;
  printf("\n enter no of  element :");
  scanf("%d",&num);
  printf(" enter the value :\n");
  fflush(stdin);fflush(stdout);
  for(i=0;i<num;i++)
    {
      scanf("%d",&a[i]);
      fflush(stdin);fflush(stdout);

  }
  printf("enter the element to be searched :\n");
  scanf("%d",&element);
  fflush(stdin);fflush(stdout);
  i=0;
  while(i<num && element !=a[i]){
    i++;
  }
  if (i<num){
    printf("number found at the location= %d",i+1);
  }
  else{
    printf("number not found");
  }




}