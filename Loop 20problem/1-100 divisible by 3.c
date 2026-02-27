#include <stdio.h>

int main() {
    int x,y=0;
    for(x=1;x<=100;x++){
        if(x%3==0){
            y++;
        }
    }
printf("Answer is %d",y);
    return 0;
}
