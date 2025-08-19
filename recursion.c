#include <stdio.h>

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
}

else 
{return (num * factorial(num - 1));}
}

int main(){
int number;
printf("Enter your number for which you want to calculate factorial: ");
scanf("%d", &number);

printf("You answer is %d", factorial(number));
    return 0;
}