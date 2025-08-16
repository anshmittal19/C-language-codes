#include <stdio.h>

int main(){
int num,temp=0;
printf("Enter a number(0 to stop): ");
    scanf("%d", &num);

while (num != 0)
{
    temp += num;
    printf("Enter a number(0 to stop): ");
    scanf("%d", &num);
    
}

printf("Total Sum = %d", temp);


    return 0;
}