#include<stdio.h>
int main(){
  float x,y,sum;
  printf("Enter the first float number: ");
  scanf("%f",&x);
  printf("Enter the second float number: ");
  scanf("%f",&y);
sum=x+y;
  printf("%.2f+%.2f= %.3f",x,y,sum);

return 0;
}
