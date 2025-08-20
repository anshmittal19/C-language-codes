#include <stdio.h>
int Fib_recursive(int n){
    if( n==0 || n==1){
        return n;
    }
    else return Fib_recursive(n-1) + Fib_recursive(n-2);
}
int main (){

    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d, ", Fib_recursive(i));
    }


    return 0;
}