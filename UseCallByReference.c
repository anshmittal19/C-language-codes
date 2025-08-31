#include <stdio.h>

//We are writing a C program in which two given numbers a and b
// and final value of a is summation of both and b is subtraction of both using call by reference

void AddMinus(int* m, int* n){
   
    int sum = *m + *n;
    
    int diff = *m - *n;

    *m = sum;
    *n = diff;

}

int main(){
    int a= 44,b= 32;

    AddMinus(&a, &b);
    printf("The value a is %d & b is %d", a, b);
    return 0;
}