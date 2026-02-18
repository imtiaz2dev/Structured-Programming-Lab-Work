#include <stdio.h>

int main(){
    int x;
    printf("Enter age: ");
    scanf("%d",&x);
    
    if(x>=18){
       printf("Able to vote");
    }else{
        printf("Unable to vote");
    }
    

    return 0;
}
