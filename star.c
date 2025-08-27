#include <stdio.h>

int main(){
printf("Type '0' for Triangular star pattern and '1' for Reversen triangular star pattern:-\n");
int choice,n;
scanf("%d", &choice);
printf("Type the number of rows for star pattern: ");
scanf("%d", &n);
if (choice == 1){
    for(int i=n; i>=1; i--){
      for(int j=1; j<=i; j++){
        printf("* ");
      }  
      printf("\n");
    }
}

else if (choice == 0){
    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++) {
        printf("* ");
      }  
        printf("\n");
    }
}
else{
    printf("INVALID INPUT!");
}

    return 0;
}