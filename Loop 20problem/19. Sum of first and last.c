#include<stdio.h>
int main(){
int x,y,z,a;
    printf("Enter Number: ");
    scanf("%d", &x);
    z= x % 10;
    y = x;
    while(y >= 10){
    y /= 10;
    a= y+z;
    printf("%d\n",a);
    }
    return 0;
}
