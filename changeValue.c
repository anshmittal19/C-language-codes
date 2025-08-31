#include <stdio.h>

void ChangeValue(int* address){
    *address = 65;
}

int main(){
    int a = 32;
    printf("The value of a is now %d\n", a);
    ChangeValue(&a);
     printf("The value of a is now %d\n", a);
    return 0;
}