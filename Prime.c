#include <stdio.h>
#include <math.h>

void IsPrime(int a)
{
    if (a <= 1)
    {
        printf("%d is not a Prime number.\n", a);
        return;
    }
    
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            printf("%d is not Prime number.\n", a);
            return;
        }
    }

    printf("%d is a Prime number.\n", a);

}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    IsPrime(num);

    return 0;
}