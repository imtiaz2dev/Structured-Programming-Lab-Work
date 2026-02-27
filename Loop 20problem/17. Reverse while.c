#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d", &x);
    y=x;
    while(y>0){
        z=y%10;
        printf("%d", z);
        y=y/10;
       }
    return 0;
}
