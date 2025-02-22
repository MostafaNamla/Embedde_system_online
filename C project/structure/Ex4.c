#include "stdio.h"

typedef struct Sstudent {
    char name[50];
    int roll_number;
    double marks;
} student_data;

void Read_structuers_data(student_data stu[]) {
    int size = 10;
    for (int i = 0; i < size; i++) {
        stu[i].roll_number = i + 1;
        printf("For Roll number: %d\n", stu[i].roll_number);
        printf("Enter name: ");
        getchar();
        fgets(stu[i].name, sizeof(stu[i].name), stdin);

        stu[i].name[strcspn(stu[i].name, "\n")] = '\0';
        printf("Enter Marks: ");
        scanf("%lf", &stu[i].marks);
    }
}
void Display_Students_Data(student_data stu[]) {
    int size = 10;
    for (int i = 0; i < size; i++) {
        printf("\nDisplaying Information for Roll number: %d\n", stu[i].roll_number);
        printf("Name: %s\n", stu[i].name);
        printf("Marks: %.2lf\n", stu[i].marks);
    }
}

int main(void) {
    student_data students[10];
    Read_structuers_data(students);
    Display_Students_Data(students);
    return 0;
}
