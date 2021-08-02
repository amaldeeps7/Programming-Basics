#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("\n\n\t\tProgram to take input of various datatypes in C\n\n\n");

    int num1, num2;  
    float fraction;     
    char character;

    printf("Enter two numbers number\n");
    
    // Taking integer as input from user
    scanf("%d%i", &num1, &num2);
    printf("\n\nThe two numbers You have entered are %d and %i\n\n", num1, num2);

    // Taking float or fraction as input from the user
    printf("\n\nEnter a Decimal number\n");
    scanf("%f", &fraction); 
    printf("\n\nThe float or fraction that you have entered is %f", fraction);

    // Taking Character as input from the user
    printf("\n\nEnter a Character\n");
    scanf("%c",&character);
    printf("\n\nThe character that you have entered is %c", character);
    
    getchar();
    getchar();
    return 0;
}