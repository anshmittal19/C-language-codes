#include <stdio.h>
#include <string.h>
//Jo hum last m likhenge sirf woo thik rhega baki wale corrupt hoo jayenge
//like iss program m sirf marks thik se print honge kyuki hum union use krr rhe h
// union yaha memory allovation m size 4 bytes lega jabki struct 9 bytes leta
union Student{
    char name[50];
    int id;
    float marks;
};

int main(){
    union Student s1,s2,s3;
    {
        strcpy(s1.name, "Ansh Mittal");
        s1.id = 12;
        s1.marks=98;
        strcpy(s2.name, "Ravi Kumar");
        s2.id = 78;
        s2.marks=99;
        strcpy(s3.name, "Bhvish Kamboj");
        s3.id = 28;
        s3.marks=99.5;
        
    };

   printf("The name of Student 1 is %s\n", s1.name);
   printf("The id of Student 1 is %d\n", s1.id);
   printf("The marks of Student 1 is %.2f\n", s1.marks);
   printf("The name of Student 2 is %s\n", s2.name);
   printf("The id of Student 2 is %d\n", s2.id);
   printf("The marks of Student 2 is %.2f\n", s2.marks);
   printf("The name of Student 3 is %s\n", s3.name);
   printf("The id of Student 3 is %d\n", s3.id);
   printf("The marks of Student 3 is %.2f\n", s3.marks);
    
    
    return 0;
}