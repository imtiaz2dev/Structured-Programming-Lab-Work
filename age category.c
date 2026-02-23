#include<stdio.h>
int main(){
    
    int x;
    printf("Enter age: ");
scanf("%i",&x);
    
if(x>=0&&x<=12){
    printf("Children");
}else if(x>=13&&x<=19){
    printf("Youth");
}else{
    printf("Adult");
}

return 0;
}
