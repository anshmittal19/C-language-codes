#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    char str3[100];
    printf("Type first name: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Type second name: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
  
    printf("%s is a friend of %s",str1, str2);
    printf("\n");
    strcpy(str3,strcat(str1,str2));
    printf("The combined name is %s", str3);
    return 0;

}