#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("\n\n\t\tASCII value of Character\n\n\n");

    char c;
    printf("Enter a character : ");
    scanf("%c" , &c);
    printf("\n\nASCII value of %c = %d",c,c);

    getchar();
    getchar();
    return 0;
}