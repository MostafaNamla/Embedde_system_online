#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student student;
    printf("Enter information of student:\n");

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';  
    
    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter marks :");
    scanf("%f", &student.marks);


    printf("Displaying Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks:%f\n",student.marks);

    return 0;

}