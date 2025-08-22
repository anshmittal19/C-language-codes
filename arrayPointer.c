#include <stdio.h>
void SwapArray(int *arrStart, int *arrEnd){
     while(arrStart <= arrEnd){
        printf("%d ", *arrEnd);
        arrEnd--;
    }
    printf("\n");
    

}

int main(){
    int arr[100];
    int n;
    printf("Enter the no. of elements in Array(Max 100): ");
    scanf("%d", &n);

    printf("Type the elements of Array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Reversed Array: ");
    SwapArray(arr, arr +n-1);
    return 0;
}