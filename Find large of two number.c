#include<stdio.h>
int main(){
  int x,y;
printf("Enter first number: ");
scanf("%d",&x);
printf("Enter second number: ");
scanf("%d",&y);
if(x>y){
printf("First number is big");
}else if(x==y){
printf("Two number is equal");
}else{
    printf("second number is big");
}
return 0;
}
