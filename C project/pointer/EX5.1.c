#include <stdio.h>

struct Employee {
    char name[30];
    int id;
};

int main() {
    struct Employee emp1 = {"Alex", 1002};
    struct Employee *arr[1]; 
    struct Employee **ptr = arr; 

    arr[0] = &emp1;

    printf("Employee Name : %s\n", (*ptr)->name);
    printf("Employee ID : %d\n", (*ptr)->id);

    return 0;
}