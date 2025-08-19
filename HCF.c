#include <stdio.h>
int HCF(int a, int b) {
    if (b == 0)
        return a;
    return HCF(b, a % b);
}

int main(){
printf("Enter two number for which you want HCF: ");
int num1,num2;
scanf("%d %d", &num1, &num2);
printf("The HCF of given numbers is %d", HCF(num1, num2));

    return 0;
}