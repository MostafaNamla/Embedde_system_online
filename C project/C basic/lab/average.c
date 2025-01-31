#include <stdio.h>
//calculates the average students degree for any given students number
int main(){
    int student,i=1;
    float sum,degree;
    printf("Enter student number of the student : \n");
    scanf("%d",&student);
    fflush(stdin);fflush(stdout);


    for(i;i<=student;i++){
        printf("\n the student(%d)degree:",i);
        scanf("%f",&degree);
        sum+=degree;

    }
    printf("\n the average :%f",sum/student);




}
