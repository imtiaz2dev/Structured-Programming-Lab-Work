#include <stdio.h>

int main(){
    int pas,ticket,taka;
    printf("Yes=1 | No=0\n");
printf("Passport= ");
    scanf("%d",&pas);
printf("Ticket= ");
    scanf("%d",&ticket);
printf("Taka= ");
    scanf("%d",&taka);
    
if((pas==1)&&(ticket==1||taka==1)){
    printf("Can go abroad");
}else{
    printf("Can not go abroad");
}

    return 0;
}
