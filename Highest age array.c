#include<stdio.h>
int main(){
    int age[]={10,5,1,2,3,5,7,9};
    int length= sizeof(age)/ sizeof(age[1]);
    int hage;
    hage=age[0];
for(int i=0; i<length; i++){
    if(hage<age[i]){
        hage=age[i];
    }
}
    printf("Highest number of age is: %d",hage);
    
    return 0;
}
