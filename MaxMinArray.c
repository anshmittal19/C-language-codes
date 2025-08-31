#include <stdio.h>

int main(){
    int n;
 
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
       int MAX = arr[0];
       int MIN = arr[0];
    for (int i = 0; i < n; i++)
    {
        
        if(MAX < arr[i]){
            MAX = arr[i];
        }
    }

     for (int i = 0; i < n; i++)
    {
        
        if(MIN > arr[i]){
            MIN = arr[i];
        }
    }

    printf("The largest number of the array is %d\n", MAX);
    printf("The smallest number of the array is %d\n", MIN);
    
    
    return 0;
}