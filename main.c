#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{   
    char answer[10];
    printf("Welcome To Cli Calculator\nMade by Argha Datta\n");
    
    do
    {
        char inputUser;
        float num1, num2, result;
        printf("Please enter your state of operation: \n");
        scanf("%c",&inputUser);
    
        printf("Enter the first operand: ");
        scanf("%f",&num1);
        printf("Enter the second operand: ");
        scanf("%f",&num2);
        switch (inputUser)
        {
        case '+':
            printf("The Addition of %f and %f is %f\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("The Subtraction of %f and %f is %f\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("The Multiplication of %f and %f is %f\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("The Division of %f and %f is %f\n",num1,num2,num1/num2);
            break;
        case '^':
            printf("The Result of %f ^ %f is %f\n",num1,num2,powf(num1,num2));
        default:
            printf("Invalid Operation,please try again!\n");
            break;
        }
        printf("Do you want to run it again(if yes ,type yes or type no for exit) :");
        scanf("%s",answer);

    } while (strcmp(answer,"yes")  == 0);
    
    return 0;
}


















