#include <stdio.h>

int main(){
    int x;
printf("Enter the result: ");
    scanf("%d",&x);
if(x<40){
printf("Fail");
  }else if(x<60){
printf("Grade:\"D\"");
  }else if(x<65){
printf("Grade:\"C\"");
  }else if(x<70){
printf("Grade:\"B\"");
  }else if(x<75){
printf("Grade:\"A-\"");
  }else if(x<80){
printf("Grade:\"A\"");
  }else if(x<=100){
printf("Grade:\"A+\"");
}
    return 0;
}
