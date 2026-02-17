#include<stdio.h>

int main(){
    float C,F;
printf("Enter Fahrenheit: ");
scanf("%f",&F);
C=(F-32)*5/9;

printf("Celsius: %.2f",C);

return 0;
}
