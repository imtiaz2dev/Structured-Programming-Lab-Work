#include <stdio.h>
int main() {
    int x,a=0,b=1,c;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("Fibonaci series: ");
    for(;a<=x;){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
