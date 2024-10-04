#include <stdio.h>

int main(){
    int n;
    int i=1;
    // printf("enter the numbe is %d",n);  not not sworking
    
    scanf("%d",&n);
    do{
        printf("nanutral number is :%d\n",i);
        i++;

    }while(i<=n);
    return 0;
}