#include <stdio.h>

int main(){
    // typedef <previous_name> <alias_name>;
    // after that both the name of datatype will works
    typedef int integer;
    integer a=21;
    int b= 22;
    printf("The value of a is %d and b is %d\n", a,b);
    return 0;
}