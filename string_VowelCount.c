#include <stdio.h>

int main(){
    printf("Type your Sentence: ");
    int count = 0;
    int i=0;
    char str[100];
fgets(str, sizeof(str), stdin);
while (str[i] != '\0')
{
    char ch = str[i];
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        count++;
     
    }
       i++;
}

printf("Number of vowels are %d", count);
    return 0;
}