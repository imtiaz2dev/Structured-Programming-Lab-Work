#include <stdio.h>

int main() {
    int x=1,y,z=0;
    printf("Enter Digit: ");
    scanf("%d",&y);
    while(x<=y){
    z=z+x;
    x++;
    }
   printf("Sum is: %d",z);
    return 0;
}
