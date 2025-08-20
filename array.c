#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter  your input Values: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int largest = array[0];
    int second_largest = -2147483648;
    for (int i = 0; i < n; i++)
    {

        if (array[i] > largest)
        {
            second_largest = largest;

            largest = array[i];
        }

        else if (array[i] < largest && array[i] > second_largest)
        {
            second_largest = array[i];
        }
    }

    printf("%d is largest & %d is second largest number of input array.\n", largest, second_largest);

    return 0;
}