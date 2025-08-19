#include <stdio.h>
int ProductOfDigits(int a, int product){
    if(a==0){
        return product;
    }
    else 
    product = (a%10)*(product);
    return ProductOfDigits(a/10, product);

}

int main()
{

    printf("Enter your number(to calc Product of all digits): ");
    int num;
    scanf("%d", &num);
    printf("The Product of all digits are %d", ProductOfDigits(num, 1));

    return 0;
}