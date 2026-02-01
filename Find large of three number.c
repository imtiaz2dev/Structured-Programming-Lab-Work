#include <stdio.h>

int main(){
    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    printf("Enter the third number: ");
    scanf("%d",&z);
if(x>y && x>z){
    printf("First number is big.");
}else if(y>x && y>z){
    printf("Second number is big.");
}else{
        printf("Third number is big.");
}

    return 0;
}
