#include <stdio.h>

int main ()
{
	int i,num,a[10],element,location;
	printf("enter t no of element\n");
	scanf("%d",&num);
	for (i=0;i<num;i++){
        scanf("%d",&a[i]);
	}
	printf("enter the element to be inserted  \n");
	scanf("%d",&element);
	printf("enter the location  \n");
	scanf("%d",&location);
	for(i=num;i>=location;i--){
       a[i]=a[i-1];
	}
	num++;
	a[location-1]=element;
	for (i=0;i<num;i++){
        printf("\t%d",a[i]);
	}



}
