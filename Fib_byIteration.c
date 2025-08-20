#include <stdio.h>

int main()
{
    int n, i;
    int array[1000];
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    if (n == 1)
    {
        printf("0, 1");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        if (i == 1 || i == 0)
        {
            array[i] = i;
        }
        else
        {
            array[i] = array[i - 1] + array[i - 2];
        }
        printf("%d, ", array[i]);
    }

    return 0;
}