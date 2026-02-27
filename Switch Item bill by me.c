#include <stdio.h>

int main() {
    int x,y;
    printf("Cha=1, Coffee=2, Ice Cream=3, Cake=4\n");
    printf("Order Number: ");
    scanf("%d",&x);
    printf("Quantity: ");
    scanf("%d",&y);
    switch(x){
        case 1:printf("Pay %d Taka",y*10);break;
        case 2:printf("Pay %d Taka",y*12);break;
        case 3:printf("Pay %d Taka",y*14);break;
        case 4:printf("Pay %d Taka",y*16);break;

        default:printf("INVALID");break;
    }
    return 0;
}
