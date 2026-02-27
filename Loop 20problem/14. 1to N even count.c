#include <stdio.h>

int main() {
    int x=1,y,z=0;
    printf("Enter Digit: ");
    scanf("%d",&y);
    while(x<=y){
    if(x%2==0){
        z++;
    }
    x++;
    }
   printf("Even number count: %d",z);
    return 0;
}
