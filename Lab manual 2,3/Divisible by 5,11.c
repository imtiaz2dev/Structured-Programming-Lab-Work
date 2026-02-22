#include<stdio.h>
int main(){
    
    int x;
    printf("Enter a Number: ");
scanf("%d",&x);
    if(x%5==0 && x%11==0){
    printf("Divisible by 5,11");
}else{
    printf("Not Divisible");
}
return 0;
}
