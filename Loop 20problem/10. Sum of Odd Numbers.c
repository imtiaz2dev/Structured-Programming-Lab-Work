#include <stdio.h>

int main() {
    int x,y=0;
    for(x=1;x<=100;x++){
    if(x%2==1){
        y=y+x;
    }
    }
    printf("Sum is: %d",y);
    return 0;
}
