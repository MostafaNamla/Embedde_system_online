#include <stdio.h>

int main() {
    int arr[15], n, i;
    int *ptr;

    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    ptr = arr + n - 1;

    printf("\nThe elements of array in reverse order are :\n");
    for (i = n; i > 0; i--) {
        printf("element - %d : %d\n", i, *ptr);
        ptr--;
    }

    return 0;
}
