#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d",&x);
for(y = x; y > 0; y=y/10){
    z=y % 10;
    printf("%d",z);
    }
return 0;
}
