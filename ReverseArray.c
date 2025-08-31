#include <stdio.h>



void rev(int arr[], int n) {
  
  	// Two pointers
    int l = 0, r = n - 1;
    while (l < r) {
      
        // Swap the elements
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        
        // Move pointers towards middle
        l++;
        r--;
    }
}

int main(){
      int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter  your input Values: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    rev(array, n);
    printf("Reversed Array: ");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}