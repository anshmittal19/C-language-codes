#include <stdio.h>

int main()
{
    int num;
    int temp = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Factorial = 1");
        return 0;
    }
    else
        for (int i = num; i > 1; i--)
        {

            temp = temp * i;
        }

    printf("Factorial = %d\n", temp);

    return 0;
}