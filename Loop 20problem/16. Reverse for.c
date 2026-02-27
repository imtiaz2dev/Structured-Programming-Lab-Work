#include <stdio.h>

int main() {
    int x,i,z;
    scanf("%d",&x);

    for(i = x; i > 0; i=i/10){
         z=i % 10;
        printf("%d",z);
    }

    return 0;
}
