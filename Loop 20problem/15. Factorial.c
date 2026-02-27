#include <stdio.h>

int main() {
    int x,y=1;
    printf("Enter a number: ");
    scanf("%d", &x);
    while(x >= 1){
        y=y*x;
        x--;
    }
    printf("Factorial is: %d", y);
return 0;
}
