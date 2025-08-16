#include <stdio.h>

int main(){
    int age;
printf("Enter your Age: ");
scanf("%d", &age );

if(age>=18){
    printf("You can get your Driving License");
}
else if(0<=age<18){
    printf("You cannot get your Driving License");
}
else{
    printf("INVALID INPUT!");
}

    return 0;
}