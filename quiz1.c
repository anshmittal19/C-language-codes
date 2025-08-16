#include <stdio.h>
int main (){
int a;
printf("Which exam(s) you are passed?\n1) Both Maths & Science\n2) Maths\n3) Science\nChoose option as given above-:\n");
scanf("%d", &a);
if(a == 1){
    printf("Your Prize value are Rs.45/-");
}
else if(a == 2){
    printf("Your Prize value are Rs.15/-");
}
 else if(a == 3){
    printf("Your Prize value are Rs.15/-");
}
    return 0; 
}