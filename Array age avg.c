#include<stdio.h>
int main(){
    int ages[]={20, 22, 18, 35, 48, 26, 87, 70}, length;
    float avg,sum=0;
    
length=sizeof(ages) / sizeof(ages[1]);
for(int i=0;i<length;i++){
    sum+=ages[i];
    }
    avg=sum/8;
    printf("Age avg is: %.2f",avg);
    
return 0;
}
