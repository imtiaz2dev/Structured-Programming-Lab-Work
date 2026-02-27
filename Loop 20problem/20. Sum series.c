#include<stdio.h>
int main(){
int x, y=0,z=0,i=1;
printf("Enter the number: ");
    scanf("%d",&x);
    while(i<=x){
    z=z*10+1;
    y=y+z;
    i++;
}
    printf("%d\n", y);
return 0;
}
