#include <stdio.h>

void swap(int* ptra, int *ptrb){
    printf("Before swap a = %d & b = %d\n", *ptra,*ptrb);
    int temp;
    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    printf("After swap a = %d & b = %d", *ptra,*ptrb);
   
}

int main(){

int a,b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);

int *ptra = &a;
int *ptrb = &b;

swap(ptra,ptrb);

    return 0;
}