#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *ptr;
    int len, i;

    printf("Input a string: ");
    scanf("%s", str);

    len = strlen(str);
    ptr = str + len - 1;

    printf(" reverse of the string :");
    for (i = len; i > 0; i--) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
