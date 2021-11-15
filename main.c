#include <stdio.h>
#include <math.h>
#include <string.h>
void Addition(float a, float b)
{
    printf("The Addition of %f and %f is %f", a, b, a + b);
}

float Subtraction(float a, float b)
{
    printf("The Subtraction of %f and %f is %f", a, b, a - b);
}
float Multiplication(float a, float b)
{
    printf("The Multiplication of %f and %f is %f", a, b, a * b);
}
float Division(float a, float b)
{
    printf("The Division of %f and %f is %f", a, b, a / b);
}

int main()
{   
    char answer;
    float num1, num2, result;
    char inputUser;
    printf("Welcome To Cli Calculator\nMade by Argha Datta\n");
    printf("Please enter your state of operation: ");
    scanf("%c",&inputUser);
    if (inputUser == '+')
    {   
        printf("Enter Your First Number for Operation : ");
        scanf("%f", &num1);
        printf("Enter Your Second Number for Operation : ");
        scanf("%f",&num2);
        Addition(num1,num2);
    }
    else if (inputUser == '-')
    {
        printf("Enter Your First Number for Operation : ");
        scanf("%f", &num1);
        printf("Enter Your Second Number for Operation : ");
        scanf("%f",&num2);
        Subtraction(num1,num2);
    }
    else if (inputUser == '*')
    {
        printf("Enter Your First Number for Operation : ");
        scanf("%f", &num1);
        printf("Enter Your Second Number for Operation : ");
        scanf("%f",&num2);
        Multiplication(num1,num2);
    }
    else if (inputUser == '/')
    {
        printf("Enter Your First Number for Operation : ");
        scanf("%f", &num1);
        printf("Enter Your Second Number for Operation : ");
        scanf("%f",&num2);
        Division(num1,num2);
    }
    else if (inputUser == '^')
    {
        printf("Enter Your First Number for Operation : ");
        scanf("%f", &num1);
        printf("Enter Your Second Number for Operation : ");
        scanf("%f",&num2);
        printf("The result of %f ^ %f is : %f",num1,num2,powf(num1,num2));
    }
    else
    {
        printf("You have entered wrong operation,please try again!");
    }
    return 0;
}


















