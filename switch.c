#include <stdio.h>

int main()
{

    printf("Enter a number (1-7): ");
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is Wednesday");
        break;
    case 4:
        printf("Today is Thursday");
        break;
    case 5:
        printf("Today is Friday");
        break;
    case 6:
        printf("Today is Saturday");
        break;
    case 7:
        printf("Today is Sunday");
        break;

    default:
        printf("Invalid Input");
    }
    return 0;
}