#include <stdio.h>

int main(){
   int i;
   float degree[10];
   for(i=1;i<=10;i++){
    printf("Enter student %d degree is:",i);
    scanf("%f",&degree[i]);
   }
   for(i=1;i<=10;i++){
    printf("\n student %d degree is:%f",i,degree[i]);
   }






}