#include <stdio.h>

int main() {
    int x,y=1,z;
        printf("Enter Factorial: ");
        scanf("%d",&z);
    for(x=1;x<=z;x++){
    y=y*x;
    }
        printf("Factorial is: %d",y);
    return 0;
}
