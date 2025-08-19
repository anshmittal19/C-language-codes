#include <stdio.h>
int SumOfDigits(int a, int sum){
    if(a==0){
        return sum; //sum will initialize by zero in main function
    }
    else 
    sum = sum + a%10;
    return SumOfDigits(a/10, sum);
}

int main(){

    printf("Enter your number(to calc sum of all digits): ");
    int num;
    scanf("%d", &num);
    printf("The sum of all digits are %d", SumOfDigits(num,0));
    return 0;
}