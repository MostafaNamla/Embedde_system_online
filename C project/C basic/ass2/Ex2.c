#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;
    printf("Enter charater of :  ");
    scanf ("%c",&ch);
    fflush(stdin); fflush(stdout);
    if(ch=='a'|| ch=='A' ch=='i' ||ch=='I' ch=='f'|| ch=='F' ch=='g'|| ch=='G')
        printf("The charater %c vowel ",ch);
    else
        printf("The charater %c constant%c",ch);

    return 0;

}
