#include <stdio.h>
#include <string.h>

void removeNewline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

struct DriverInfo{
    char name[50];
    char DL[20];
    int kms;
    char Route[50];

};

int main(){
   struct DriverInfo d1,d2,d3;
  printf("Type details of first Driver\n");
  printf("Name: ");
  fgets(d1.name, sizeof(d1.name), stdin);
  removeNewline(d1.name);
  printf("DL No: ");
  fgets(d1.DL, sizeof(d1.DL), stdin);
  removeNewline(d1.DL);
  printf("Route Info: ");
  fgets(d1.Route, sizeof(d1.Route), stdin);
  removeNewline(d1.Route);
  printf("Kms driven: ");
  scanf("%d", &d1.kms);
    getchar();

    printf("Type details of second Driver\n");
  printf("Name: ");
  fgets(d2.name, sizeof(d2.name), stdin);
  removeNewline(d2.name);
  printf("DL No: ");
  fgets(d2.DL, sizeof(d2.DL), stdin);
  removeNewline(d2.DL);
  printf("Route Info: ");
  fgets(d2.Route, sizeof(d2.Route), stdin);
  removeNewline(d2.Route);
  printf("Kms driven: ");
  scanf("%d", &d2.kms);
    getchar();

    printf("Type details of third Driver\n");
  printf("Name: ");
  fgets(d3.name, sizeof(d3.name), stdin);
  removeNewline(d3.name);
  printf("DL No: ");
  fgets(d3.DL, sizeof(d3.DL), stdin);
  removeNewline(d3.DL);
  printf("Route Info: ");
  fgets(d3.Route, sizeof(d3.Route), stdin);
  removeNewline(d3.Route);
  printf("Kms driven: ");
  scanf("%d", &d3.kms);
    getchar();
   printf("\n");
    
printf("Details of first Driver: \n");
printf("Name: %s\nDL Number: %s\nRoute Info: %s\nKms Driven: %d\n", d1.name, d1.DL, d1.Route, d1.kms);

printf("Details of second Driver: \n");
printf("Name: %s\nDL Number: %s\nRoute Info: %s\nKms Driven: %d\n", d2.name, d2.DL, d2.Route, d2.kms);


printf("Details of third Driver: \n");
printf("Name: %s\nDL Number: %s\nRoute Info: %s\nKms Driven: %d\n", d3.name, d3.DL, d3.Route, d3.kms);
    return 0;
}