#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("\n\n\t\tHow to use gets() function\n\n\n");

    char str[50];   // char array of size 50
    printf("Enter your complete name:\n\n\n");

    gets(str);
    printf("\n\nWelcome :  %s\n\n\n", str);
    
    
    getchar();
    getchar();
    return 0;
}