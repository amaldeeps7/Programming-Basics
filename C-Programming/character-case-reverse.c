#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    printf("\n\n\t\tProgram to reverse the case of input character\n\n\n");

    char alphabet;
    printf("Enter an alphabet : ");
    printf("\n"); //to move to next line

    alphabet=getchar();

    printf("\n\nReverse case of %c is : ", alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet));

    else
        //must be an upper case character

    printf("%c", tolower(alphabet));
    
    getchar();
    getchar();
    return 0;
}