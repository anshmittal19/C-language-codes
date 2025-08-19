#include <stdio.h>
// km to miles (First)
//inches to foot (Second)
// cm to inches (Third)
//inches to metre (Fourth)
//pound to Kgs (Fifth)


/*Again
we use goto in line 71 which make the flow of code to line 32 if user enter invalid input*/


float first(float Km){
    return Km*0.621371;
}
float second(float inches){
    return inches*0.0833333;
}
float third(float cms){
    return cms*0.393701;
}
float fourth(float inches){
    return inches*0.0254;
}
float fifth(float pounds){
    return pounds*0.453592;
}

int main(){ 
    char Choice = 'c';
    
    while (Choice != 'q' && Choice != 'Q')
    {
         
printf("Choose the Conversion Scale as you want(1 to 5):-\n1) Km to Miles\n2) Inches to Foot\n3) Cms to Inches\n4) Inches to Metres\n5) Pounds to Kgs\n");
int ChoosenNumber;
again:
scanf("%d", &ChoosenNumber);
if(ChoosenNumber == 1){
    printf("Type value(in kms): ");
    float n1;
    scanf("%f", &n1);
    printf("%f kms is equal to %.2f miles\n", n1, first(n1));
}

else if(ChoosenNumber == 2){
    printf("Type value(in inches): ");
    float n2;
    scanf("%f", &n2);
    printf("%f inches is equal to %.2f foot\n", n2, second(n2));
}

else if(ChoosenNumber == 3){
    printf("Type value(in cms): ");
    float n3;
    scanf("%f", &n3);
    printf("%f cms is equal to %.2f inches\n", n3, third(n3));
}

else if(ChoosenNumber == 4){
    printf("Type value(in inches): ");
    float n4;
    scanf("%f", &n4);
    printf("%f inches is equal to %.2f metres\n", n4, fourth(n4));
}

else if(ChoosenNumber == 5){
    printf("Type value(in pounds): ");
    float n5;
    scanf("%f", &n5);
    printf("%f poundss is equal to %.2f kgs\n", n5, fifth(n5));

    }
    else if(ChoosenNumber<1 || ChoosenNumber>5){
        printf("Invalid Input!\nType Again\n");
        goto again;
    }
    printf("Press 'Q/q' to Quit or 'Any Character' to Continue\n");
   scanf(" %c", &Choice);
   }

   
    return 0;
}