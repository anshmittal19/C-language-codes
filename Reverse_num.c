#include <stdio.h>

int ReverseNum(int num, int reverse){
    if(num == 0){
        return reverse;
    }
    else
    reverse = ((reverse*10) + (num%10));
    return ReverseNum(num/10, reverse); 
}
int main(){
printf("Enter your number: ");
int num;
scanf("%d", &num);
printf("The reverse of the %d is %d", num, ReverseNum(num, 0));
    return 0;
}