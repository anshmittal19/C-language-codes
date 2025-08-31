#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter value of how much natural number you want to print: ");
    scanf("%d", &n);
    for (int i = 1; i <=n ; i++)
    { 
        sum = sum+i;
    }
    printf("The sum of first %d natural numbers are %d", n, sum);
    
    return 0;
}