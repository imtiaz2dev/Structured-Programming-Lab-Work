#include<stdio.h>
int main(){
int x,y=1,z;
    printf("Enter the number:");
    scanf("%d", &x);
    while(x > 0){
    z = x % 10;
    y=y*z;
    x /= 10;
    }
    printf("%d\n", y);
return 0;
}
