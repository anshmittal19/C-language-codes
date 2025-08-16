#include <stdio.h>

int main()
{

    int num1, num2;
    char op;
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    printf("Enter an Operator(+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
    {
        printf("Your Result: %d\n", num1 + num2);
        break;
    }
    case '-':
    {
        printf("Your Result: %d\n", num1 - num2);
        break;
    }

    case '*':
    {
        printf("Your Result: %d\n", num1 * num2);
        break;
    }
    case '/':
    {
        if (num2 == 0)
        {
            printf("Error! Division by zero.\n");
            break;
        }
        else
        {
            printf("Your Result: %d\n", num1 / num2);
            break;
        }
    }
    default:
        printf("Invalid Operator");
    }
    return 0;
}