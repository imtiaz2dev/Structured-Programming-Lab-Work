#include<stdio.h>
int main(){
    
    float x,y,z,pi=3.1416;
    printf("Enter Radius: ");
scanf("%f",&x);
    printf("Enter Height: ");
scanf("%f",&z);
    
y=x*x*pi*z;
    printf("Volume of the cylinder is: %.4f",y);

return 0;
}
