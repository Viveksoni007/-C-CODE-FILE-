#include <stdio.h>

int main(){
    // int a=4,b=2,c=6,d=32;
    // int  a,b,c,d;
    // printf("Enter the value %d:"a b c d);
    // scanf("%d",&a b c d);
        int a, b, c, d;
    printf("Enter the values of a, b, c, and d: ");
    
    // Correct usage of scanf to take inputs for all four variables
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("THE gratest of all is %d:\n",a);
    }
    else if(b>a && b>c && b>d){
        printf("THE gratest of all is %d:\n",b);
    }
    else if(c>a && c>b && c>d){
        printf("THE gratest of all is %d:\n",c);
    }
    else if(d>a && d>c && d>b){
        printf("THE gratest of all is %d:\n",d);
    }
    return 0;
}